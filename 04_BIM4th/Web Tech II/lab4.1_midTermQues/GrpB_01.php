<!-- WAP to represent the marks of web technology for 5 students in an array and use foreach loop to represent them in HTML table  -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Group B Q1</title>
</head>
<body>
    <table border="1">
        <tr>
            <th>Name</th>
            <th>Marks</th>
        </tr>
        <?php 
            $stu_marks = array("Sayujya" => 30,
                            "Sarin" => 30,
                            "Sneha" => 100,
                            "Tisha" => 150,
                            "Sandesh" => 50);
            
            foreach($stu_marks as $name => $marks){
                echo "<tr>
                    <td>$name</td>
                    <td>$marks</td>
                </tr>";
            }
        ?>
    </table>
</body>
</html>