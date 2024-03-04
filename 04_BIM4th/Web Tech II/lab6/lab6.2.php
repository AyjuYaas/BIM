<!-- Write a program to create a table named tbl_Students. It should have the StudentId as the auto incremented value and be the primary key. Other fields can be created as required. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Create Table</title>
</head>
<body>
    <?php 

        $color = "red";
        $message = "";
        $connMessage = "";
        if($_SERVER['REQUEST_METHOD'] === 'POST'){
            createTable();
        }
        
        function createTable(){
            $serverName = "localhost";
            $username = "root";
            $password = "";
            $dbname = "test_123";
            
            $conn = new mysqli($serverName, $username, $password, $dbname);
            if($conn->connect_error){
                $GLOBALS['connMessage']= "Error Connnecting database";
                die();
            }
            $GLOBALS['connMessage'] = "Connected Succesfully";
        
            $createQuery = "CREATE TABLE tbl_students (
                StudentId INT(3) NOT NULL AUTO_INCREMENT,
                Username VARCHAR(30) NOT NULL,
                Password VARCHAR(30) NOT NULL,
                Email VARCHAR(30) NOT NULL,
                Gender VARCHAR(7) NOT NULL,
                Country VARCHAR(6) NOT NULL,
                Hobbies VARCHAR(50) NOT NULL,
                PRIMARY KEY (StudentId)
            );";

            try{
                if($conn->query($createQuery) === TRUE){
                    $GLOBALS['message'] = "Table tbl_students created successfully";
                    $GLOBALS['color'] = "green";
                }
            }catch(Exception $err){
                $GLOBALS['message'] = "Error Creating Table: " . $err;
            }
            $conn->close();
        }
    ?>
    <form method="POST" action="<?php echo htmlspecialchars($_SERVER['PHP_SELF'])?>" >
        <input type="submit" value="Create Database">
    </form>
    <p style="color: green"> <?php echo $connMessage ?> </p>
    <span style="color: <?php echo $color ?>"> <?php echo $message ?> </span>
</body>
</html>
