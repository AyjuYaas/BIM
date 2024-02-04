<!-- WAP php program to represent the marks of web technology for  5 students in an array and use for loop and foreach loop to represent them in html  table. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 2.1</title>
</head>
<body>
    <table border="1">
        <tr>
            <th>Name(For Loop)</th>
            <th>Marks</th>
        </tr>
        <?php
            $students = array("Sneha" => 100,
                            "Tisha" => 97,
                            "Sandesh" => 69,
                            "Sarin" => 83,
                            "Ribek" => 74);
            
            $names = array_keys($students);
            for($i = 0; $i < count($students); $i++){
                echo "<tr>
                    <td>".$names[$i]."</td>
                    <td>".$students[$names[$i]]."</td>
                    </tr>";
            }

            print ("<tr>
                    <th>Names (For Each)</th>
                    <th>Marks</th>
                    </tr>");

            foreach($students as $name => $marks){
                echo "<tr>
                    <td>".$name."</td>
                    <td>".$marks."</td>
                    </tr>";
            }
        ?>
    </table>
</body>
</html>