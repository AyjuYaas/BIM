-- 1. List the names of all students and the place where they study.
SELECT S.first_name ||' '|| S.last_name AS STUDENT_NAME, C.location
FROM Students S
INNER JOIN Colleges C ON C.college_code = S.college_code;

-- 2. What are the courses that Bijay Shrestha has taken?
SELECT C.course_title
FROM Students S 
JOIN ENROLLS E ON E.reg_no = S.reg_no
JOIN COURSES C ON C.course_code = E.course_code
WHERE S.first_name = 'Bijay' AND S.last_name = 'Shrestha'; 

-- 3. What is the number of students in each college?
SELECT C.college_name, COUNT(s.reg_no) AS NUMBER_OF_STUDENTS
FROM Students S 
JOIN Colleges C ON C.college_code = S.college_code
GROUP BY C.college_name;

-- 4. Find the name of youngest student.
SELECT S.first_name ||' '|| S.last_name AS STUDENT_NAME
FROM Students S 
WHERE S.birthdate = (
    SELECT MAX(S.birthdate)
    FROM Students S
);

-- 5. List the students who have enrolled in all the courses that Ajay Sharma has taken.
SELECT S.first_name ||' '|| S.last_name AS STUDENT_NAME
FROM Students S 
JOIN ENROLLS E ON E.reg_no = S.reg_no
WHERE E.course_code = (
    SELECT E.course_code
    FROM Students S 
    JOIN ENROLLS E ON E.reg_no = S.reg_no
    WHERE S.first_name = 'Ajay' AND S.last_name = 'Sharma'
);

-- 6. Find the student who has scored the highest in BIM.
SELECT S.first_name ||' '|| S.last_name AS STUDENT_NAME, E.marks
FROM Students S 
JOIN ENROLLS E ON E.reg_no = S.reg_no
JOIN Courses C ON C.course_code = E.course_code
WHERE C.course_title = 'BIM' AND E.marks = (
    SELECT MAX(E.MARKS)
    FROM ENROLLS E
    JOIN COURSES C ON E.course_code = C.course_code 
    WHERE C.course_title = 'BIM'
);

-- 7. Find the students who have not enrolled in any course.
SELECT S.first_name ||' '|| S.last_name AS STUDENT_NAME
FROM Students S 
JOIN Enrolls E ON S.reg_no = E.reg_no
WHERE E.course_code IS NULL;

-- 8. Find the course that has the highest number of students enrolled.
SELECT C.course_title, COUNT(E.reg_no) AS STUDENT_NUMBER
FROM Courses C 
JOIN Enrolls E ON E.course_code = C.course_code
GROUP BY C.course_title
ORDER BY COUNT(E.reg_no) DESC
FETCH FIRST 1 ROW ONLY;

-- 9. If the pass mark is 40, how many students have failed in BIM?
SELECT COUNT(S.reg_no) AS NUMBER_OF_FAILED_STUDENTS
FROM STUDENTS S 
JOIN ENROLLS E ON E.reg_no = S.reg_no
WHERE E.MARKS <= 40
GROUP BY S.reg_no;

-- 10. What is the average mark obtained by student of St. Xavier’s College in BIM?
SELECT AVG(E.MARKS)
FROM STUDENTS S 
JOIN Colleges C ON C.college_code = S.college_code
JOIN ENROLLS E ON E.reg_no = S.reg_no
JOIN Courses U ON U.course_code = E.course_code
WHERE C.college_name LIKE 'ST. XAVIER''S COLLEGE' AND U.course_title = 'BIM';