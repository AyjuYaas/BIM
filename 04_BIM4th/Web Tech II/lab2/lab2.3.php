<!-- WAP in PHP using a for loop to display numbers up to 10 in the html table -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 2.3</title>
</head>
<body>
    <table border="1" width="50%">
        <tr>
            <?php
                for($i=0; $i<=10; $i++){
                    print ("<td>$i</td>");
                }
            ?>
        </tr>
    </table>
</body>
</html>