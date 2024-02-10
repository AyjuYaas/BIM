/* 1. Find the names of all branches in the loan relation */
SELECT branch_name 
FROM loan;

-- 2. Find the names of all branches in the loan relations removing duplicates
SELECT DISTINCT branch_name
FROM loan;

/* 3. To find all loan number for loans made at the Perryridge branch with loan amounts
greater than $120. */
select loan_number 
from loan
where amount > 1200;

/* 4. Find the loan number of those loans with loan amounts between $900 and $1000 (that
is, $900 and $1000) */
select loan_number
from loan
where amount > 900 AND amount < 1500;

