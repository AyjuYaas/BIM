-- 06. List the name, job_id, annual salary and department_id of each employee. Sort the names
-- in alphabetical order.
SELECT E.FIRST_NAME||' '||E.LAST_NAME AS FULL_NAME,
        E.JOB_ID,
        E.SALARY * 12 AS ANNUAL_SALARY,
        E.DEPARTMENT_ID
FROM EMPLOYEES E
ORDER BY FULL_NAME;

-- 7. For the above query, sort the names in the reverse order. 
SELECT E.FIRST_NAME||' '||E.LAST_NAME AS FULL_NAME,
        E.JOB_ID,
        E.SALARY * 12 AS ANNUAL_SALARY,
        E.DEPARTMENT_ID
FROM EMPLOYEES E
ORDER BY FULL_NAME DESC; 

-- 8. For question 8, list the department id in ascending order and within each department id, sort
-- the records in terms of the salary (highest salary first).
SELECT DISTINCT E.DEPARTMENT_ID, E.SALARY
FROM EMPLOYEES E 
ORDER BY E.DEPARTMENT_ID, E.SALARY DESC;

-- 9. List the names, numbers, job and departments of all clerks.
SELECT E.FIRST_NAME||' '||E.LAST_NAME AS FULL_NAME,
        E.PHONE_NUMBER, J.JOB_TITLE, D.DEPARTMENT_NAME
FROM EMPLOYEES E 
JOIN JOBS J ON E.JOB_ID = J.JOB_ID
JOIN DEPARTMENTS D ON E.DEPARTMENT_ID = D.DEPARTMENT_ID
WHERE J.JOB_TITLE LIKE '%Clerk%';

-- 10. Find employees whose salary is between 1000 and 2000.
SELECT E.FIRST_NAME||' '||E.LAST_NAME AS FULL_NAME,
        E.SALARY
FROM EMPLOYEES E 
WHERE E.SALARY >= 2000 AND E.SALARY <=3000;