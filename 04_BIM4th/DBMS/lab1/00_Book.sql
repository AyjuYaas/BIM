-- Customer Table 
create table customer
 (customer_name varchar2(20) not null,
  customer_street varchar2(30),
  customer_city varchar2(30));

alter table customer
add constraints customer_pk1 primary key(customer_name);

-- Branch Table 
create table branch
 (branch_name varchar2(15),
  branch_city varchar2(30),
  assets integer,
  check (assets>=0));

alter table branch
modify (branch_name not null);

alter table branch
add constraints branch_pk1 primary key(branch_name);

-- ACCOUNT TABLE 
create table account
 (account_number varchar2(10) not null,
  branch_name varchar2(15),
  balance integer,
  primary key (account_number)
 );

alter table account 
add check (balance >= 0);

alter table account
add constraint account_fk1 foreign key (branch_name) references branch(branch_name);

-- DEPOSITOR TABLE 
create table depositor
 (customer_name varchar2(20),
  account_number varchar2(10),
  primary key (customer_name,account_number),
  foreign key (customer_name) references customer,
  foreign key (account_number) references account);

-- LOAN TABLE 
create table loan
 (loan_number varchar2(10) constraint loan_pk1 primary key,
  branch_name varchar2(15) constraint loan_fk1 references branch(branch_name),
  amount integer,
  check (amount>=0));

-- BORROWER TABLE 
create table borrower
 (customer_name varchar2(20),
  loan_number varchar2(10),
  constraint borrower_pk1 primary key (customer_name,loan_number),
  constraint borrower_fk1  foreign key (customer_name) references customer(customer_name),
  constraint borrower_fk2 foreign key (loan_number) references loan);

alter table borrower
drop constraint borrower_fk2;

alter table borrower
add constraint borrower_fk2 foreign key (loan_number) references loan;

-- INSERT DATA INTO CUSTOMER 
insert into customer
 values('Adams','Spring','Pittsfield');

insert into customer
 values('Brooks','Senator','Brooklyn');

insert into customer
 values('Curry','North','Rye');

insert into customer
 values('Glenn','Sand Hill','Woodside');

insert into customer
 values('Green','Walnut','Stamford');

insert into customer
 values('Hayes','Main','Harrison');

insert into customer
 values('Jackson','Dupont','Woodside');

insert into customer
 values('Johnson','Alma','Palo Alto');

insert into customer
 values('Jones','Main','Harrison');

insert into customer
 values('Lindsay','Park','Pittsfield');

insert into customer
 values('Smith','North','Rye');

insert into customer
 values('Turner','Putnam','Stamford');

insert into customer
 values('Williams','Nassau','Princeton');


-- INSERT DATA INTO BRANCH 
insert into branch
 values('Brighton','Brooklyn',7100000);

insert into branch
 values('Downtown','Brooklyn',9000000);

insert into branch
 values('Mianus','Horseneck',400000);

insert into branch
 values('North Town','Rye',3700000);

insert into branch
 values('Perryridge','Horseneck',1700000);

insert into branch
 values('Pownal','Bennington',300000);

insert into branch
 values('Redwood','Palo Alto',2100000);

insert into branch
 values('Round Hill','Horseneck',8000000);


-- INSERT DATA INTO ACCOUNT
insert into account
 values('A-101','Downtown',500);

insert into account
 values('A-215','Mianus',700);

insert into account
 values('A-102','Perryridge',400);

insert into account
 values('A-305','Round Hill',350);

insert into account
 values('A-201','Brighton',900);

insert into account
 values('A-222','Redwood',700);

insert into account
 values('A-217','Brighton',750);


-- INSERT DATA INTO DEPOSITOR
insert into depositor
 values('Hayes','A-102');

insert into depositor
 values('Johnson','A-101');

insert into depositor
 values('Johnson','A-201');

insert into depositor
 values('Jones','A-217');

insert into depositor
 values('Lindsay','A-222');

insert into depositor
 values('Smith','A-215');

insert into depositor
 values('Turner','A-305');


-- INSERT DATA INTO LOAN 
insert into loan
 values('L-11','Round Hill',900);

insert into loan
 values('L-14','Downtown',1500);

insert into loan
 values('L-15','Perryridge',1500);

insert into loan
 values('L-16','Perryridge',1300);

insert into loan
 values('L-17','Downtown',1000);

insert into loan
 values('L-23','Redwood',2000);

insert into loan
 values('L-93','Mianus',500);


-- INSERT DATA INTO BORROWER 
insert into borrower
 values('Adams','L-16');

insert into borrower
 values('Curry','L-93');

insert into borrower
 values('Hayes','L-15');

insert into borrower
 values('Jackson','L-14');

insert into borrower
 values('Jones','L-17');

insert into borrower
 values('Smith','L-11');

insert into borrower
 values('Smith','L-23');

insert into borrower
 values('Williams','L-17');