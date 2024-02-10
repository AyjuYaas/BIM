/* 26. Find the names of all branches that have greater assets than all branches located in
Brooklyn. */
select branch_name
from branch
where assets > all(
    select assets
    from branch
    where branch_city = 'Brooklyn'
);

/* 27. Find all customers who have an account at all branches located in Brooklyn. */
select distinct d.customer_name
from depositor d
where exists(
    select a.account_number
    from account a
    where a.account_number = d.account_number
    and exists(
        select b.branch_name
        from branch b 
        where b.branch_name = a.branch_name
        and b.branch_city = 'Brooklyn'
    )
);

/* 28. Find all customers who have at most one account at the Perryridge branch. */
select customer_name
from (
    select d.customer_name, count(*) as numberOfAccount
    from depositor d 
    join account a on d.account_number = a.account_number
    where a.branch_name = 'Perryridge'
    group by d.customer_name 
)
where numberOfAccount <= 1;

/* 29. Find all customers who have at least two accounts at the Perryridge branch. */
select customer_name
from (
    select d.customer_name, count(*) as numberOfAccount
    from depositor d 
    join account a on d.account_number = a.account_number
    where a.branch_name = 'Perryridge'
    group by d.customer_name
)
where numberOfAccount >= 2;

/* 30. Create a view consisting of branches and their customers and then find all customers of
the Perryridge branch from the created view. */
create view branch_customers as
select a.branch_name, d.customer_name
from depositor d
join account a on a.account_number = d.account_number;

select *
from branch_customers
where branch_name = 'Perryridge';

