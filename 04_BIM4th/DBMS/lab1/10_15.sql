/* 10. Find the names of all customers whose street includes the substring “Main”. */
select customer_name
from customer
where customer_street like '%Main%';

/* 11. List in alphabetic order the names of all customers having a loan in Perryridge branch */
select b.customer_name
from borrower b
join loan l on b.loan_number = l.loan_number 
where l.branch_name = 'Perryridge'
order by b.customer_name;

/* 12. Find all customers who have a loan, an account, or both */
select customer_name
from borrower
union
select customer_name
from depositor;

/* 13. Find all customers who have both a loan and an account. */
select customer_name
from borrower
intersect
select customer_name
from depositor;

/* 14. Find all customers who have an account but no loan. */
select customer_name
from depositor
minus
select customer_name
from borrower;

/* 15. Find the average account balance at the Brighton branch. */
select AVG(balance) 
from account
where branch_name = 'Brighton';