<!-- Sort the above table(18) in ascending order by students count and display them in another html table. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 3.4</title>
</head>
<body>
    <table border="1">
        <tr>
            <th>Class</th>
            <th>Students Count</th>
        </tr>
        <?php
            $arr = array(
                "2A" => 30,
                "3A" => 35,
                "4A" => 45,
                "2B" => 40,
                "3B" => 25,
                "4B" => 30
            );

            asort($arr);

            foreach($arr as $class => $count){
                echo "
                    <tr>
                        <td>$class</td>
                        <td>$count</td>
                    </tr>
                ";
            }
        ?>   
    </table>
</body>
</html>