/* 5. Find the Cartesian product borrower x loan */
select * 
from borrower, loan;

/* 6. Find the name, loan number and loan amount of all customers having a loan at the
Perryridge branch. */
select b.customer_name, b.loan_number, l.amount
from borrower b
JOIN loan l ON b.loan_number = l.loan_number
where l.branch_name = 'Perryridge';

/* 7. Find the name, loan number and loan amount of all customers; rename the column
name loan-number as loan-id. */
select b.customer_name, b.loan_number AS loan_id, l.amount
from borrower b
join loan l on b.loan_number = l.loan_number;

/* 8. Find the customer names and their loan numbers for all customers having a loan at
some branch. */
select b.customer_name, b.loan_number
from borrower b
join loan l on b.loan_number = l.loan_number;

/* 9. Find the names of all branches that have greater assets than some branch located in
Brooklyn. */
select branch_name
from branch
where assets > (
    select MIN(assets)
    from branch
    where branch_city = 'Brooklyn'
);