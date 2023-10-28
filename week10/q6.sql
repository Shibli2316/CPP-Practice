use MCA;

create table BRANCH(
branch_name varchar(20) PRIMARY KEY,
branch_city varchar(20) NOT NULL,
assests numeric(10,3) CHECK (assests > 0)
);
desc BRANCH;

set foreign_key_checks = 1;

create table ACCOUNT(
accno INT PRIMARY KEY,
branch_name varchar(20),
balance numeric(10,3),
constraint fk1_brname FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name) ON DELETE CASCADE
);
desc ACCOUNT;

create table CUSTOMER(
customer_name varchar(20) PRIMARY KEY,
customer_street varchar(20),
customer_city varchar(20) NOT NULL
);
desc CUSTOMER;

create table DEPOSITOR(
CUSTOMER_NAME VARCHAR(20),
ACCNO INT,
constraint fk2_cusname FOREIGN KEY (CUSTOMER_NAME) REFERENCES CUSTOMER(CUSTOMER_NAME) ON DELETE CASCADE,
constraint fk3_accno FOREIGN KEY (accno) REFERENCES ACCOUNT(accno) ON DELETE CASCADE
);
desc DEPOSITOR;

create table LOAN(
loan_number numeric(10,2) PRIMARY KEY,
branch_name varchar(20),
amount numeric(10,2),
constraint fk4_brname FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name) ON DELETE CASCADE
);
desc LOAN;

create table BORROWER(
customer_name varchar(20),
loan_number numeric(10,2),
constraint fk5_cusname FOREIGN KEY (customer_name) REFERENCES CUSTOMER(customer_name) ON DELETE CASCADE,
constraint fk6_lnumber FOREIGN KEY (loan_number) REFERENCES LOAN(loan_number) ON DELETE CASCADE
);
desc BORROWER;

insert into BRANCH values ('Bgudi','Blore',1000.00);
insert into BRANCH values ('Jaynagar','Blore',2000.00);
insert into BRANCH values ('Anna','Chennai',3000.00);
insert into BRANCH values ('Karol','Delhi',4000.00);
insert into BRANCH values ('Andhri','Mumbai',5000.00);
select * from BRANCH;

insert into ACCOUNT values (1,'Bgudi',1000);
insert into ACCOUNT values (2,'Jaynagar',5000);
insert into ACCOUNT values (3,'Anna',3000);
insert into ACCOUNT values (4,'Karol',4000);
insert into ACCOUNT values (5,'Andhri',6000);
select * from ACCOUNT;

insert into CUSTOMER values ('Ajay','M.G.Road','Blore');
insert into CUSTOMER values ('Sumukh','Brigade Road','Blore');
insert into CUSTOMER values ('Santa','Mount Road','Chennai');
insert into CUSTOMER values ('Amit','Rajnath','Delhi');
insert into CUSTOMER values ('Rajath','A.S.Street','Mumbai');
select * from CUSTOMER;

insert into DEPOSITOR values ('Ajay',1);
insert into DEPOSITOR values ('Sumukh',2);
insert into DEPOSITOR values ('Santa',3);
insert into DEPOSITOR values ('Amit',4);
insert into DEPOSITOR values ('Rajath',5);
select * from DEPOSITOR;

insert into LOAN values (10,'Bgudi',3000);
insert into LOAN values (20,'Jaynagar',2000);
insert into LOAN values (30,'Anna',25000);
insert into LOAN values (40,'Karol',4000);
insert into LOAN values (50,'Andhri',3000);
select * from LOAN;

insert into BORROWER values ('Ajay',10);
insert into BORROWER values ('Sumukh',20);
insert into BORROWER values ('Santa',30);
insert into BORROWER values ('Amit',40);
insert into BORROWER values ('Rajath',50);
select * from BORROWER;


/* Find all the customers who have at least two accounts at the main branch */
select D.customer_name FROM DEPOSITOR D,ACCOUNT A,BRANCH B
where D.accno = A.accno
AND A.branch_name = B.branch_name
AND B.branch_city = 'Chennai'
GROUP BY D.customer_name HAVING COUNT(*) >= 2;

/* Find all the customers who have an account at all the branches located in a
specific city. */
select customer_name FROM DEPOSITOR D,ACCOUNT A,BRANCH B
where D.accno = A.accno
AND A.branch_name = B.branch_name
AND B.branch_city = 'Chennai'
GROUP BY D.customer_name
HAVING COUNT(A.branch_name) = (select COUNT(X.branch_name)
from BRANCH X
where X.branch_city = 'Chennai');

/* Demonstrate how you delete all account tuples at every branch located in a
specific city. */
delete from ACCOUNT
where BRANCH_NAME in (select B.branch_name from BRANCH B where B.branch_city = 'Blore');
select * from account;

commit;