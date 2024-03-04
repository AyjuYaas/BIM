-- 1. If the salary is a monthly salary, list the names and annual salary of each employee.
SELECT E.FIRST_NAME || ' ' || E.LAST_NAME AS FULL_NAME, E.SALARY * 12 AS YEARLY_SALARY
FROM EMPLOYEES E;

-- 2. For the annual salary field from the result of the above query, please replace the column
-- name by annsal.
SELECT E.FIRST_NAME || ' ' || E.LAST_NAME AS FULL_NAME, E.SALARY * 12 AS ANNSAL
FROM EMPLOYEES E;

-- 3. What would the SQL statement be to obtain the result
SELECT E.EMPLOYEE_ID || '-' || E.FIRST_NAME AS EMPLOYEE,
        D.DEPARTMENT_NAME AS WORKS_IN_DEPARTMENT,
        D.DEPARTMENT_ID
FROM EMPLOYEES E 
JOIN DEPARTMENTS D ON E.DEPARTMENT_ID = D.DEPARTMENT_ID;

-- 4. If employees with a particular job are given commissions, list the names and annual income
-- of each employee.
SELECT E.FIRST_NAME, E.SALARY * E.COMMISSION_PCT + E.SALARY AS TOTAL_SALARY
FROM EMPLOYEES E
WHERE E.COMMISSION_PCT IS NOT NULL;

-- 5. List all the department numbers in the Employees table. Remove duplication if any
-- Department id occurs more than once.
SELECT UNIQUE E.DEPARTMENT_ID
FROM EMPLOYEES E;