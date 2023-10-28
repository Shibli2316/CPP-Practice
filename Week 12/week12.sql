use MCA;

CREATE TABLE UNIVERSITY(
univ_code VARCHAR(10) PRIMARY KEY,
univ_name VARCHAR(50) NOT NULL,
univ_location VARCHAR(20) NOT NULL,
univ_dept INT,
univ_studnum INT
);
CREATE INDEX univ_index ON UNIVERSITY(univ_name);
DESC UNIVERSITY;
SHOW INDEXES FROM UNIVERSITY;

CREATE TABLE DEPARTMENT(
dept_code VARCHAR(10) PRIMARY KEY,
dept_name VARCHAR(20) NOT NULL,
dept_studnum INT,
dept_location VARCHAR(20),
univ_code VARCHAR(10),
FOREIGN KEY (univ_code) REFERENCES UNIVERSITY(univ_code)
ON DELETE CASCADE
);
CREATE INDEX dept_index ON DEPARTMENT(dept_name);
DESC DEPARTMENT;
SHOW INDEXES FROM DEPARTMENT;

CREATE TABLE PROGRAM(
prog_code VARCHAR(10) PRIMARY KEY,
prog_num_courses INT,
prog_name VARCHAR(20) NOT NULL,
prog_studnum INT,
univ_code VARCHAR(10),
dept_code VARCHAR(10),
FOREIGN KEY (univ_code) REFERENCES UNIVERSITY(univ_code) ON DELETE CASCADE,
FOREIGN KEY (dept_code) REFERENCES DEPARTMENT(dept_code) ON DELETE CASCADE
);
CREATE INDEX prog_index ON PROGRAM(prog_name);
DESC PROGRAM;
SHOW INDEXES FROM PROGRAM;

CREATE TABLE COURSES(
co_code VARCHAR(10) PRIMARY KEY,
co_name VARCHAR(20) NOT NULL,
co_studnum INT,
co_teacher VARCHAR(20),
co_credits INT,
co_duration VARCHAR(10),
univ_code VARCHAR(10),
dept_code VARCHAR(10),
prog_code VARCHAR(10),
FOREIGN KEY (univ_code) REFERENCES UNIVERSITY(univ_code) ON DELETE CASCADE,
FOREIGN KEY (dept_code) REFERENCES DEPARTMENT(dept_code) ON DELETE CASCADE,
FOREIGN KEY (prog_code) REFERENCES PROGRAM(prog_code) ON DELETE CASCADE
);
CREATE INDEX co_index ON COURSES(co_name);
DESC COURSES;
SHOW INDEXES FROM COURSES;

CREATE TABLE SYLLABUS(
start_date DATE,
end_date DATE,
num_of_periods INT,
content VARCHAR(50),
prog_code VARCHAR(10),
co_code VARCHAR(10),
FOREIGN KEY (prog_code) REFERENCES PROGRAM(prog_code) ON DELETE CASCADE,
FOREIGN KEY (co_code) REFERENCES COURSES(co_code) ON DELETE CASCADE
);
CREATE INDEX syl_index ON SYLLABUS(co_code);
DESC SYLLABUS;
SHOW INDEXES FROM SYLLABUS;

CREATE TABLE FACULTY(
fac_num VARCHAR(10) PRIMARY KEY,
fac_name VARCHAR(20) NOT NULL,
fac_add VARCHAR(20),
fac_sallary NUMERIC(10,2),
univ_code VARCHAR(10),
dept_code VARCHAR(10),
co_name VARCHAR(20),
FOREIGN KEY (univ_code) REFERENCES UNIVERSITY(univ_code) ON DELETE CASCADE,
FOREIGN KEY (dept_code) REFERENCES DEPARTMENT(dept_code) ON DELETE CASCADE,
FOREIGN KEY (co_name) REFERENCES COURSES(co_code) ON DELETE CASCADE
);
CREATE INDEX fac_index ON FACULTY(fac_name);
DESC FACULTY;
SHOW INDEXES FROM FACULTY;

INSERT INTO UNIVERSITY VALUES ('un01','Aligarh Muslim University','Aligarh',141,40000);
INSERT INTO UNIVERSITY VALUES ('un02','University of Jammu','Jammu',36,17000);
INSERT INTO UNIVERSITY VALUES ('un03','Jawaharlal Nehru University','Delhi',141,50000);
INSERT INTO UNIVERSITY VALUES ('un04','University of Delhi','Delhi',150,36520);
INSERT INTO UNIVERSITY VALUES ('un05','Al-Barkaat Educational Institution','Aligarh',25,55263);
SELECT * FROM UNIVERSITY;

INSERT INTO DEPARTMENT VALUES ('de01','Computer Science',50,'Aligarh','un01');
INSERT INTO DEPARTMENT VALUES ('de02','Mathematics',150,'Aligarh','un01');
INSERT INTO DEPARTMENT VALUES ('de03','Computer Science',60,'Jammu','un02');
INSERT INTO DEPARTMENT VALUES ('de04','Chemistry',200,'Delhi','un03');
INSERT INTO DEPARTMENT VALUES ('de05','Computer Science',175,'Delhi','un03');
INSERT INTO DEPARTMENT VALUES ('de06','Computer Science',50,'Delhi','un04');
INSERT INTO DEPARTMENT VALUES ('de07','Robotics',30,'Delhi','un04');
INSERT INTO DEPARTMENT VALUES ('de08','Petrochemical',70,'Aligarh','un05');
INSERT INTO DEPARTMENT VALUES ('de09','Buisness Analysis',200,'Aligarh','un05');
SELECT * FROM DEPARTMENT;

INSERT INTO PROGRAM VALUES ('p01',5,'BCA',50,'un01','de01');
INSERT INTO PROGRAM VALUES ('p02',2,'MCA',40,'un01','de01');
INSERT INTO PROGRAM VALUES ('p03',6,'Reserch Work',150,'un01','de02');
INSERT INTO PROGRAM VALUES ('p010',5,'Maths Analysis',25,'un01','de02');
INSERT INTO PROGRAM VALUES ('p04',7,'MCA',50,'un02','de03');
INSERT INTO PROGRAM VALUES ('p05',5,'Nuclear Chemistry',250,'un03','de04');
INSERT INTO PROGRAM VALUES ('p06',5,'Industrial Resource',45,'un03','de04');
INSERT INTO PROGRAM VALUES ('p07',8,'MCA',20,'un03','de05');
INSERT INTO PROGRAM VALUES ('p08',4,'MCA',100,'un04','de06');
INSERT INTO PROGRAM VALUES ('p015',5,'Stats Input',50,'un04','de06');
INSERT INTO PROGRAM VALUES ('p09',6,'Network System',50,'un04','de07');
INSERT INTO PROGRAM VALUES ('p011',5,'Reserch Work',25,'un05','de08');
INSERT INTO PROGRAM VALUES ('p012',5,'Industrial Resource',150,'un05','de08');
INSERT INTO PROGRAM VALUES ('p013',5,'Analysis of Data',75,'un05','de09');
INSERT INTO PROGRAM VALUES ('p014',5,'DBMS',30,'un05','de09');
SELECT * FROM PROGRAM;

INSERT INTO COURSES VALUES ('CO101','Fundamental of IT',30,'Asif',2,'25 Periods','un01','de01','p01');
INSERT INTO COURSES VALUES ('CO102','Information Security',30,'Khalid',2,'30 Periods','un01','de01','p02');
INSERT INTO COURSES VALUES ('CO103','Adv. Calculus',25,'Saim',4,'60 Periods','un01','de02','p03');
INSERT INTO COURSES VALUES ('CO104','Information Security',30,'Anwar',2,'25 Periods','un02','de03','p04');
INSERT INTO COURSES VALUES ('CO105','Atom Variation',30,'Khalid',2,'35 Periods','un03','de04','p05');
INSERT INTO COURSES VALUES ('CO106','Env. Chemistry',30,'Rashid',4,'30 Periods','un03','de04','p06');
INSERT INTO COURSES VALUES ('CO107','Computer Arch.',30,'Ismail',4,'20 Periods','un03','de04','p07');
INSERT INTO COURSES VALUES ('CO108','Computer Arch.',30,'Shibli',2,'15 Periods','un04','de06','p08');
INSERT INTO COURSES VALUES ('CO109','Neural Network',30,'Sarim',6,'20 Periods','un04','de07','p09');
INSERT INTO COURSES VALUES ('CO110','Numerical Analysis',30,'Riyaz',3,'10 Periods','un01','de02','p010');
INSERT INTO COURSES VALUES ('CO111','Petroleum',30,'Safwan',3,'18 Periods','un05','de08','p011');
INSERT INTO COURSES VALUES ('CO112','Petrol Forms',30,'Hashim',2,'32 Periods','un05','de08','p012');
INSERT INTO COURSES VALUES ('CO113','Python Intro',30,'Sarim',4,'25 Periods','un05','de09','p013');
INSERT INTO COURSES VALUES ('CO114','SQL',30,'Usman',4,'15 Periods','un05','de09','p014');
INSERT INTO COURSES VALUES ('CO115','Computer Arch.',30,'Sarfaraaz',2,'30 Periods','un04','de06','p015');
SELECT * FROM COURSES;

INSERT INTO SYLLABUS VALUES ('20-02-17','20-05-20',25,'Computer System,Hardware Parts,System Language','p01','CO101');
INSERT INTO SYLLABUS VALUES ('20-10-15','21-01-30',30,'Need for Security,Ways to Secure Data','p02','CO102');
INSERT INTO SYLLABUS VALUES ('20-07-15','20-10-20',60,'Multi-Variable,Double and Triple Integral','p03','CO103');
INSERT INTO SYLLABUS VALUES ('20-07-25','20-10-12',25,'Principles of InfoSec,Privacy,Protection','p04','CO104');
INSERT INTO SYLLABUS VALUES ('20-10-25','20-12-11',35,'Variation in Atoms,How variaton Works','p05','CO105');
INSERT INTO SYLLABUS VALUES ('21-10-25','21-12-20',30,'Elements in Env.,Extraction Process','p06','CO106');
INSERT INTO SYLLABUS VALUES ('21-03-25','21-07-19',20,'Into to Computer Tech,Designing a Processsor','p07','CO107');
INSERT INTO SYLLABUS VALUES ('20-09-02','20-11-09',15,'Memory Hierarchy,Computer Arthmetic','p08','CO108');
INSERT INTO SYLLABUS VALUES ('21-04-01','22-01-19',20,'Types of Network,Algorithm,ML','p09','CO109');
INSERT INTO SYLLABUS VALUES ('21-04-10','21-10-20',10,'Non-Linear Equation,Approx. Theory,Interpolation','p010','CO110');
INSERT INTO SYLLABUS VALUES ('20-07-10','20-11-09',18,'Process of Petrol,Ore Selection,Heating Level','p011','CO111');
INSERT INTO SYLLABUS VALUES ('20-07-30','21-01-25',32,'Fundamental of Petrol,Petrol Formation','p012','CO112');
INSERT INTO SYLLABUS VALUES ('20-01-17','20-04-23',25,'Vaiables,Data Types,Modules,File Handling','p013','CO113');
INSERT INTO SYLLABUS VALUES ('20-02-01','20-05-20',15,'DML,DDL,Procedure,Function,Pl/SQL','p014','CO114');
INSERT INTO SYLLABUS VALUES ('20-11-24','21-03-28',30,'Storage and I/O,Digital Logic Design','p015','CO115');
SELECT * FROM SYLLABUS;

INSERT INTO FACULTY VALUES ('F001','Asif','Aligarh',200000,'un01','de01','CO101');
INSERT INTO FACULTY VALUES ('F002','Khalid','Aligarh',300000,'un01','de01','CO102');
INSERT INTO FACULTY VALUES ('F003','Saim','Aligarh',302000,'un01','de02','CO103');
INSERT INTO FACULTY VALUES ('F004','Anwar','Aligarh',102000,'un02','de03','CO104');
INSERT INTO FACULTY VALUES ('F005','Khalid','Delhi',82200,'un03','de04','CO105');
INSERT INTO FACULTY VALUES ('F006','Rashid','Delhi',50200,'un03','de04','CO106');
INSERT INTO FACULTY VALUES ('F007','Ismail','Delhi',10200,'un03','de04','CO107');
INSERT INTO FACULTY VALUES ('F008','Shibli','Delhi',14200,'un04','de06','CO108');
INSERT INTO FACULTY VALUES ('F009','Sarim','Aligarh',40200,'un04','de07','CO109');
INSERT INTO FACULTY VALUES ('F010','Riyaz','Delhi',555200,'un01','de02','CO110');
INSERT INTO FACULTY VALUES ('F011','Safwan','Karnataka',50520,'un05','de08','CO111');
INSERT INTO FACULTY VALUES ('F012','Hashim','Karnataka',78520,'un05','de08','CO112');
INSERT INTO FACULTY VALUES ('F013','Sarim','Aligarh',33348,'un05','de09','CO113');
INSERT INTO FACULTY VALUES ('F014','Usman','Karnataka',123450,'un05','de09','CO114');
INSERT INTO FACULTY VALUES ('F015','Sarfaraaz','Karnataka',852420,'un04','de06','CO105');
SELECT * FROM FACULTY;

/* List of Universities situated at Delhi */
SELECT * FROM UNIVERSITY WHERE univ_location = 'Delhi';

/* List of all Departments of AMU */
SELECT * FROM DEPARTMENT WHERE univ_code = 'un01';

/* Find the location of JNU */
SELECT univ_location,univ_name FROM UNIVERSITY WHERE univ_name = 'Jawaharlal Nehru University';

/* List of all Programs run by University of Jammu */
SELECT * FROM PROGRAM WHERE univ_code = 'un02';

/* List of Universities that run Program "MCA" */
SELECT PROGRAM.prog_code,PROGRAM.prog_name,UNIVERSITY.univ_name FROM PROGRAM
inner join UNIVERSITY ON PROGRAM.univ_code = UNIVERSITY.univ_code
WHERE PROGRAM.prog_name = 'MCA';

/* List of Courses of "MCA" run by AMU */
SELECT COURSES.co_code,COURSES.co_name,PROGRAM.prog_name,DEPARTMENT.dept_name,UNIVERSITY.univ_name
FROM COURSES
inner join PROGRAM ON COURSES.prog_code = PROGRAM.prog_code
inner join DEPARTMENT ON PROGRAM.dept_code = DEPARTMENT.dept_code
inner join UNIVERSITY ON DEPARTMENT.univ_code = UNIVERSITY.univ_code
WHERE PROGRAM.prog_name = 'MCA' AND UNIVERSITY.univ_name = 'Aligarh Muslim University';

/* List of Faculties specialized in "Information Security" across different universities */ 
SELECT FACULTY.fac_name,COURSES.co_name AS COURSES, UNIVERSITY.univ_name AS UNIVERSITY
FROM FACULTY
inner join COURSES ON FACULTY.co_name = COURSES.co_code
inner join UNIVERSITY ON COURSES.univ_code = UNIVERSITY.univ_code
WHERE COURSES.co_name = 'Information Security';

/* Syllabus of "Computer Architecture" of different Universities */
SELECT SYLLABUS.co_code, COURSES.co_name, UNIVERSITY.univ_name AS UNIVERSITY,content
FROM SYLLABUS
inner join COURSES on SYLLABUS.co_code = COURSES.co_code
inner join UNIVERSITY on COURSES.univ_code = UNIVERSITY.univ_code
WHERE COURSES.co_name = 'Computer Arch.';

commit;