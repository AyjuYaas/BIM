<!-- Write a program that displays the numbers from 1 to 10 and their squares in a table(numbers in one column and squares in another column). -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 3.2</title>
</head>
<body>
    <table border="1">
        <tr>
            <th>Number</th>
            <th>Square</th>
        </tr>
        <?php
            for($i=1; $i<=10; $i++){
                $sq = $i*$i;
                echo"<tr>
                    <td>$i</td>
                    <td>$sq</td>
                </tr>";
            }
        ?>
    </table>
</body>
</html>