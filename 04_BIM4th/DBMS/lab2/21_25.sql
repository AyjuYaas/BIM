-- 21. List the name, job_id and salary of all employees who have a manager.

SELECT E.FIRST_NAME||' '||E.LAST_NAME AS NAME, 
        E.JOB_ID, E.SALARY
FROM EMPLOYEES E 
WHERE E.MANAGER_ID IS NOT NULL;

-- 22. List employee name and manager name of all the employees.
SELECT E.FIRST_NAME AS EMPLOYEE_NAME,
        M.FIRST_NAME AS MANAGER_NAME
FROM EMPLOYEES E 
JOIN EMPLOYEES M ON E.MANAGER_ID = M.EMPLOYEE_ID;

-- 23. List the name of the employee who works in the department which name starts with F
SELECT E.FIRST_NAME, D.DEPARTMENT_NAME
FROM EMPLOYEES E 
JOIN DEPARTMENTS D ON E.DEPARTMENT_ID = D.DEPARTMENT_ID
WHERE D.DEPARTMENT_NAME LIKE 'A%';

-- 24. Display all employee names and their dept names, in dept name order.
SELECT E.FIRST_NAME||' '||E.LAST_NAME AS EMPLOYEE_NAME,
        D.DEPARTMENT_NAME
FROM EMPLOYEES E 
JOIN DEPARTMENTS D ON D.DEPARTMENT_ID = E.DEPARTMENT_ID
ORDER BY D.DEPARTMENT_NAME;

-- 25. List all the Job whose min salary is >= 5000 and max salary <= 15000
SELECT J.JOB_TITLE
FROM JOBS J
WHERE J.MIN_SALARY >= 5000 AND J.MAX_SALARY <=15000;