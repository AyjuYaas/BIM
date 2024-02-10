/* 16. Find the number of tuples in the customer relation. */
select COUNT(*) 
from customer;

/* 17. Find the number of depositors for each branch. */
select branch_name, count(*)
from account
group by branch_name;

/* 18. Find the names of all branches where the average account balance is more than $500. */
select branch_name
from account
group by branch_name
having avg(balance) > 500;

/* 19. Find all loan number which appears in the loan relation with null values for amount. */
select loan_number
from loan
where amount is null;

/* 20. Find total of all loan amounts */
select sum(amount)
from loan;
