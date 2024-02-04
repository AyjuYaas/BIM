<!-- Write a PHP program to check prime numbers. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 1.6</title>
</head>
<body>
    <?php 
        $num = 57;

        if($num == 1) echo"not prime number";
        
        else{
            $flag = 0;
            for($i = 2; $i * $i <= $num; $i++){
                if($num % $i == 0){
                    echo "not prime number";
                    $flag = 1;
                    break;
                }
            }
            if ($flag == 0)
                echo"prime number";
        }
    ?>
</body>
</html>