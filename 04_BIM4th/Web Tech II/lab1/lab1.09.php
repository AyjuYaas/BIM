<!-- Write a PHP program to reverse a given number. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 1.9</title>
</head>
<body>
    <?php 
        $num = $tempNum = 123;
        echo "Original Number = $num <br /> Reversed Number = ";
        $reversedNum = 0;

        for($i = 0; $i < mb_strlen($num); $i++){
            $rem = $tempNum % 10;
            $reversedNum = ($reversedNum * 10) + $rem;
            $tempNum = $tempNum / 10;
        }
        echo $reversedNum;
    ?>
</body>
</html>