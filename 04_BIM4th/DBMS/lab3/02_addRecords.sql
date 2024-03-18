INSERT INTO Colleges
VALUES ('SXC', 'ST. XAVIER''S COLLEGE', 'MAITIGHAR, KATHMANDU');
INSERT INTO Colleges
VALUES ('LAC', 'LITTLE ANGELS'' COLLEGE', 'HATTIBAN, LALITPUR');
INSERT INTO Colleges
VALUES ('UA', 'UNITED ACADEMY', 'KUMARIPATI, LALITPUR');
INSERT INTO Colleges
VALUES ('SDC', 'SHANKER DEV CAMPUS', 'PUTALISADAK, KATHMANDU');

-- Inserting into Students --
INSERT INTO Students VALUES 
(2101, 'Sneha', 'Acharya', TO_DATE('1994-09-19', 'YYYY-MM-DD'), '9805163728', 'Janakpur', 'LAC');
INSERT INTO Students VALUES 
(2102, 'Sayujya', 'Satyal', TO_DATE('1993-02-24', 'YYYY-MM-DD'), '0987654321', 'Biratnagar', 'UA');
INSERT INTO Students VALUES 
(2103, 'Sarin', 'Joshi', TO_DATE('1998-11-02', 'YYYY-MM-DD'), '9863419572', 'Pokhara','UA');
INSERT INTO Students VALUES 
(2104, 'Bijay', 'Shrestha', TO_DATE('1997-08-11', 'YYYY-MM-DD'), '9826743015', 'Kathmandu','SDC');
INSERT INTO Students VALUES 
(2105, 'Tisha', 'Shrestha', TO_DATE('2000-06-12', 'YYYY-MM-DD'), '9815062374', 'Kathmandu','SXC');
INSERT INTO Students VALUES 
(2106, 'Sandesh', 'Lohani', TO_DATE('1992-10-05', 'YYYY-MM-DD'), '9891742056', 'Dharan','SXC');
INSERT INTO Students VALUES 
(2107, 'Ribek', 'Buddhacharya', TO_DATE('2003-04-29', 'YYYY-MM-DD'), '9801236745', 'Bhaktapur','SXC');
INSERT INTO Students VALUES 
(2108, 'Ajay', 'Sharma', TO_DATE('2004-12-21', 'YYYY-MM-DD'), '9896742051', 'Butwal','SDC');
INSERT INTO Students VALUES 
(2109, 'Parkash', 'Gunfu', TO_DATE('1995-07-17', 'YYYY-MM-DD'), '9823451760', 'Hetauda','LAC');
INSERT INTO Students VALUES 
(2110, 'Rihana', 'Chaudary', TO_DATE('1996-05-03', 'YYYY-MM-DD'), '9845271036', 'Lalitpur','LAC');

-- Inserting into Courses --
INSERT INTO Courses
VALUES ('C101', 'BIM', 3);
INSERT INTO Courses
VALUES ('C102', 'CSIT', 4);
INSERT INTO Courses
VALUES ('C103', 'Physics', 3);
INSERT INTO Courses
VALUES ('C104', 'BBA', 3);
INSERT INTO Courses
VALUES ('C105', 'BBS', 3);

-- Inserting into Enrolls --
INSERT INTO Enrolls VALUES 
('2101', 'C103', 100);
INSERT INTO Enrolls VALUES 
('2102', 'C101', 55);
INSERT INTO Enrolls VALUES 
('2103', 'C101', 69);
INSERT INTO Enrolls VALUES 
('2104', 'C104', 91);
INSERT INTO Enrolls VALUES 
('2105', 'C102', 33);
INSERT INTO Enrolls VALUES 
('2106', 'C101', 78);
INSERT INTO Enrolls VALUES 
('2107', 'C105', 54);
INSERT INTO Enrolls VALUES 
('2108', 'C101', 88);
INSERT INTO Enrolls VALUES 
('2109', 'C102', 72);
INSERT INTO Enrolls VALUES 
('2110', 'C104', 60);