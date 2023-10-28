create database MCA;

use MCA;

create table PERSON(
driver_id varchar(5) not null primary key,
name varchar(20),
address varchar(20)
);

desc PERSON;

create table CAR(
regno varchar(5) not null primary key,
model varchar(10),
year int
);

desc CAR;

create table ACCIDENT(
report_number int not null primary key,
accd_date date,
location varchar(10)
);

desc ACCIDENT;

create table OWNS(
driver_id varchar(5),
regno varchar(5),
constraint fk1_driverid foreign key (driver_id) references PERSON(driver_id),
constraint fk2_regno foreign key (regno) references CAR(regno)
);

desc OWNS;

create table PARTICIPATED(
driver_id varchar(5),
regno varchar(5),
report_number int,
damage_amount numeric(10,2), 
constraint fk3_driverid foreign key (driver_id) references PERSON(driver_id), 
constraint fk4_regno foreign key (regno) references CAR(regno), 
constraint fk5_reportno foreign key (report_number) references ACCIDENT(report_number)
);
desc PARTICIPATED;

insert into PERSON values ('1111','RAMU','R.S.LAYOUT');
insert into PERSON values ('2222','JOHN','INDIRANAGAR');
insert into PERSON values ('3333','PRIYA','JAYANAGAR');
insert into PERSON values ('4444','GOPAL','WHITEFEILD');
insert into PERSON values ('5555','LATHA','VIJAYANAGAR');
select * from PERSON;

insert into CAR values ('KA001','SUZUKI-DX',2016);
insert into CAR values ('KA002','FORDICON',2000);
insert into CAR values ('KA003','NISSA-VXI',2017);
insert into CAR values ('KA004','SUZUKI-DX',2019);
insert into CAR values ('KA01P','INDICA-VN',2008);
select * from CAR;

insert into ACCIDENT values (12,'18-06-01','M.G.ROAD');
insert into ACCIDENT values (200,'15-12-10','DOUB ROAD');
insert into ACCIDENT values (300,'03-07-23','M.G.ROAD');
insert into ACCIDENT values (25000,'21-06-11','RESY ROAD');
insert into ACCIDENT values (26500,'18-10-16','I.G.ROAD');
select * from ACCIDENT;

insert into OWNS values ('1111','KA001');
insert into OWNS values ('2222','KA002');
insert into OWNS values ('3333','KA003');
insert into OWNS values ('4444','KA004');
insert into OWNS values ('5555','KA01P');
select * from OWNS;

insert into PARTICIPATED values ('1111','KA001',12,20000);
insert into PARTICIPATED values ('2222','KA002',200,500);
insert into PARTICIPATED values ('3333','KA003',300,10000);
insert into PARTICIPATED values ('4444','KA004',25000,2375);
insert into PARTICIPATED values ('5555','KA01P',26500,9000);
select * from PARTICIPATED;

commit;

/* Update the damage amount for the car with specific regno in the accident
with report number 12 to 25000. */

update PARTICIPATED 
set damage_amount=25000
where report_number=12 and regno='KA001';
select * from participated;

/* Add a new accident to the database. */
insert into accident values (007, '08-01-01', 'New York');
select * from accident;

/* Find the total number of people who owned cars that were involved in
accidents in the year 2008. */
SELECT COUNT(DISTINCT P.driver_id) AS total_people
FROM PERSON P
JOIN OWNS O ON P.driver_id = O.driver_id
JOIN CAR C ON O.regno = C.regno
JOIN PARTICIPATED PA ON O.regno = PA.regno
JOIN ACCIDENT A ON PA.report_number = A.report_number
WHERE C.year = 2008;

/* Find the number of accidents in which cars belonging to a specific model
were involved. */
select count(*) as MODEL
from ACCIDENT A,PARTICIPATED P,CAR C
where A.report_number = P.report_number
AND P.regno = C.regno
AND C.MODEL = 'SUZUKI-DX';

commit;



