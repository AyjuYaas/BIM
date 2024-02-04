<!-- Write a PHP program to check Armstrong number. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 1.8</title>
</head>
<body>
    <?php 
        $num = $tempNum = 1634;
        $numLength = mb_strlen($num);
        $sum = 0;

        for($i = 0; $i< $numLength; $i++){
            $rem = $tempNum % 10;
            $sum += pow($rem, $numLength);
            $tempNum = $tempNum / 10;
        }

        echo "Original Number = $num <br />sum = $sum <br/> ";
        
        if($sum == $num) echo"Armstrong Number";
        else echo"Not a Armstrong Number";
    ?>
</body>
</html>