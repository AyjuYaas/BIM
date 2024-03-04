<!-- Re-use the Lab 5’s third program to authenticate the user from the database. If the student is authenticated successfully, redirect to another page and show the list of available students in the database -->
<table border="1">
    <tr>
        <th>ID</th>
        <th>Username</th>
        <th>Password</th>
        <th>Email</th>
        <th>Gender</th>
        <th>Country</th>
        <th>Hobbies</th>
    </tr>
<?php
    $server = "localhost";
    $username = "root";
    $password = "";
    $dbname = "test_123";

    $conn = new mysqli($server, $username, $password, $dbname);

    if($conn->connect_error){
        die("Database Connection failed");        
    }

    $selectQuery = 'SELECT * from tbl_students;';

    try{
        $result = $conn->query($selectQuery);
        while($row = $result->fetch_assoc()){
            echo '<tr>
                    <td>' . $row["StudentId"] . '</td>' .
                '<td>' . $row["Username"] . '</td>'.
                '<td>' . $row["Password"] . '</td>'.
                '<td>' . $row["Email"] . '</td>'.
                '<td>' . $row["Gender"] . '</td>'.
                '<td>' . $row["Country"] . '</td>'.
                '<td>' . $row["Hobbies"] . '</td>';
        
        }
    }catch(Exception $err){
        die($err);
    }

    $conn->close();
?>
</table>