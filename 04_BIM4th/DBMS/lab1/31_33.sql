/* 31. Find the average account balance of those branches where the average account balance
is greater than $120. */
select branch_name, avg(balance) as Average_balance
from account
group by branch_name
having avg(balance) > 120;

/* 32. Find all accounts with the maximum balance. */
select account_number, balance
from account
where balance = (
    select max(balance)
    from account
);

/* Find all branches where the total account deposit is greater than the select  */
select branch_name, sum(balance) 
from account
group by branch_name
having sum(balance) > (
    select avg(balance)
    from account
);
