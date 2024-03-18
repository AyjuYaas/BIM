CREATE TABLE Colleges(
    college_code VARCHAR2(5) PRIMARY KEY,
    college_name VARCHAR2(100) NOT NULL,
    location VARCHAR2(100)
);

CREATE TABLE Students(
    reg_no INT PRIMARY KEY,
    first_name VARCHAR2(50) NOT NULL,
    last_name VARCHAR2(50) NOT NULL,
    birthdate DATE NOT NULL,
    phone VARCHAR2(15),
    city VARCHAR2(30),
    college_code VARCHAR2(5),
    FOREIGN KEY (college_code) REFERENCES Colleges(college_code)   
);

CREATE TABLE Courses(
    course_code VARCHAR2(5) PRIMARY KEY,
    course_title VARCHAR2(50) NOT NULL,
    credit NUMBER NOT NULL
);

CREATE TABLE Enrolls(
    reg_no INT,
    course_code VARCHAR2(5),
    marks NUMBER,
    PRIMARY KEY (reg_no, course_code),
    FOREIGN KEY (reg_no) REFERENCES Students(reg_no),
    FOREIGN KEY (course_code) REFERENCES Courses(course_code)
);