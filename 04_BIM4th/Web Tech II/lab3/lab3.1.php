<!-- WAP in PHP to push the first 20 numbers in an array using loop and display them in an unordered list using foreach loop. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lab 3.1</title>
</head>
<body>
    <ul>
        <?php
            $arr = array();
        
            for($i=1; $i <= 20; $i++)
                array_push($arr, $i);

            foreach($arr as $e)
                echo "<li>$e</li>"
        ?>
    </ul>
</body>
</html>