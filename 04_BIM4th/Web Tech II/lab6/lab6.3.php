<!-- Re-use the Lab 5’s first program to store the user input values into the database table name tbl_Students. On successfully adding the user, show the same user form with all previous values cleared. -->

<?php 
    if($_SERVER['REQUEST_METHOD'] === 'POST'){
        $serverName = "localhost";
        $username = "root";
        $password = "";
        $dbName = "test_123";

        $conn = new mysqli($serverName, $username, $password, $dbName);
        if($conn->connect_error){
            die("Couldn't connect to Database");
        }
        echo("<p>Connected to DB</p>");

        $username = $_POST['username'];
        $password = $_POST['password'];
        $email = $_POST['email'];
        $gender = $_POST['gender'];
        $country = $_POST['country'];
        $hobby = $_POST['hobbies'];

        $addQuery = "INSERT INTO tbl_students (Username, Password, Email, Gender, Country, Hobbies)
                    VALUES ('$username', '$password', '$email', '$gender', '$country', '$hobby');";

        try{
            if($conn->query($addQuery) === TRUE){
                header('Location: ' . $_SERVER['HTTP_REFERER']);
            }
        }catch(Exception $err){
            die($err);
        }
        $conn->close();
    }
?>