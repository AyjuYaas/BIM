<!-- Represent the following table in an array and display using html table. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 3.5</title>
</head>
<body>
    <table border="1" width="500px">
        <tr>
            <th>Name</th>
            <th>English</th>
            <th>WT</th>
            <th>DSA</th>
        </tr>
        <?php
            $arr = array(
                array("Peter", 30, 75, 70),
                array("Ben", 90, 85, 80),
                array("Joe", 85, 70, 60),
            );

            for($i=0; $i<count($arr); $i++){
                echo "<tr>";
                for($j=0; $j<count($arr[$i]); $j++){
                    echo "<td>".$arr[$i][$j]."</td>";
                }
                echo"</tr>";
            }
        ?>
    </table>
</body>
</html>