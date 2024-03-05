-- 26. Show all employees in Seattle.
SELECT E.FIRST_NAME, L.CITY
FROM EMPLOYEES E, DEPARTMENTS D, LOCATIONS L 
WHERE E.DEPARTMENT_ID = D.DEPARTMENT_ID 
    AND D.LOCATION_ID = L.LOCATION_ID 
    AND L.CITY = 'Seattle';

-- 27. List the employee name, job, salary and dept name for everyone in the company except
-- clerks. Sort on salary, displaying the highest salary first.
SELECT E.FIRST_NAME||' '||E.LAST_NAME AS FULL_NAME,
        J.JOB_TITLE, E.SALARY, D.DEPARTMENT_NAME
FROM EMPLOYEES E, DEPARTMENTS D, JOBS J 
WHERE E.DEPARTMENT_ID = D.DEPARTMENT_ID 
    AND E.JOB_ID = J.JOB_ID
    AND J.JOB_TITLE NOT LIKE '%Clerk%'
ORDER BY SALARY DESC;

-- 28. List the name, job, annual salary, dept id and dept name of employees who earn $36000 a
-- year or who are clerks.
SELECT E.FIRST_NAME, J.JOB_TITLE, 
    E.SALARY * 12 AS ANNUAL_SALARY,
    E.DEPARTMENT_ID, D.DEPARTMENT_NAME
FROM EMPLOYEES E
JOIN DEPARTMENTS D ON D.DEPARTMENT_ID = E.DEPARTMENT_ID
JOIN JOBS J ON E.JOB_ID = J.JOB_ID
WHERE J.JOB_TITLE LIKE '%Clerk' 
    AND (E.SALARY * 12) = 36000;  

-- 29. List the name, job_title and Deparment_name of all the employees.
SELECT E.FIRST_NAME||' '||E.LAST_NAME AS FULL_NAME,
        J.JOB_TITLE, D.DEPARTMENT_NAME
FROM EMPLOYEES E, DEPARTMENTS D, JOBS J 
WHERE E.DEPARTMENT_ID = D.DEPARTMENT_ID 
    AND E.JOB_ID = J.JOB_ID;

-- 30. Display all employees who earn more than their managers.
SELECT E.FIRST_NAME
FROM EMPLOYEES E 
JOIN EMPLOYEES M ON E.MANAGER_ID = M.EMPLOYEE_ID
WHERE E.SALARY > M.SALARY;