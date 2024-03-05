-- 16. Calculate the average salary for each type of job.
SELECT J.JOB_TITLE, (J.MIN_SALARY + J.MAX_SALARY) / 2 AS AVERAGE_SALARY
FROM JOBS J;

-- 17. Show the average salary for each job excluding managers.
SELECT J.JOB_TITLE, (J.MIN_SALARY + J.MAX_SALARY) / 2 AS AVERAGE_SALARY
FROM JOBS J 
WHERE J.JOB_TITLE NOT LIKE '%Manager%';

-- 18. Display the average monthly salary bill for each job type within each department. (group
-- within group)
SELECT D.DEPARTMENT_NAME, J.JOB_TITLE, AVG(E.SALARY) AS AVERAGE_SALARY
FROM EMPLOYEES E 
JOIN DEPARTMENTS D ON E.DEPARTMENT_ID = D.DEPARTMENT_ID
JOIN JOBS J ON J.JOB_ID = E.JOB_ID
GROUP BY D.DEPARTMENT_NAME, J.JOB_TITLE;

-- 19. Find out the difference between highest and lowest salaries.
SELECT MAX(E.SALARY) - MIN(E.SALARY) AS DIFFERENCE 
FROM EMPLOYEES E;

-- 20. Find all departments which have more than 3 employees.
SELECT D.DEPARTMENT_NAME, COUNT(E.EMPLOYEE_ID) AS TOTAL_EMPLOYEES
FROM EMPLOYEES E 
JOIN DEPARTMENTS D ON E.DEPARTMENT_ID = D.DEPARTMENT_ID
GROUP BY D.DEPARTMENT_NAME
HAVING COUNT(E.EMPLOYEE_ID) >= 3;