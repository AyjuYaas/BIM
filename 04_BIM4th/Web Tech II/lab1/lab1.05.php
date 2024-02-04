<!-- Write a program to find the lowest number between three numbers. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=`device-width`, initial-scale=1.0">
    <title>lab 1.5</title>
</head>
<body>
    <?php 
        $num1 = 2;
        $num2 = 1;
        $num3 = 0;

        if($num1 < $num2 && $num1 < $num3)
            echo "$num1 is smaller";
        else if ($num2 < $num3)
            echo "$num2 is smaller";
        else 
            echo "$num3 is smaller"
    ?>
</body>
</html>