<!-- Write a PHP program to find whether the number is even or odd -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 1.3</title>
</head>
<body>
    <?php 
        $num = 13;

        if($num % 2 == 0){
            echo "$num is even";
        }
        else{
            echo "$num is odd";
        }
    ?>
</body>
</html>