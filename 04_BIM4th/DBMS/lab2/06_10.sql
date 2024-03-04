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

