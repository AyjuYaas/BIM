<!-- WAP to print the list in array and display in ordered lists  -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Group B Q2</title>
</head>
<body>
    <ol>
    <?php
        $arr = array("Programming with PHP", "Programming with JAVA", "Programming with C++");

        foreach($arr as $e){
            echo "<li>$e</li>";
        }
    ?>
    </ol>
</body>
</html>