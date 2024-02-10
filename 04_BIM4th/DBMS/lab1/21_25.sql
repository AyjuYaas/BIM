/* 21. Find all customers who have both an account and a loan at the bank. */
select customer_name
from borrower
intersect
select customer_name 
from depositor;

/* 22. Find all customers who have a loan at the bank but do not have an account at the bank */
select customer_name
from borrower
minus
select customer_name
from depositor;

/* 23. Find all customers who have both an account and a loan at the Perryridge branch */
select b.customer_name
from borrower b
join loan l on b.loan_number = l.loan_number
where l.branch_name = 'Perryridge'
intersect
select d.customer_name
from depositor d
join account a on d.account_number = a.account_number
where a.branch_name = 'Perryridge';

/* 24. Find all branches that have greater assets than some branch located in Brooklyn. */
select branch_name
from branch
where assets > (
    select min(assets)
    from branch
    where branch_city = 'Brooklyn'
) and branch_city != 'Brooklyn';

/* 25. Solve 24 using some clause */
select branch_name
from branch
where assets > some (
    select assets
    from branch
    where branch_city = 'Brooklyn'
) and branch_city != 'Brooklyn';