<!-- Write a PHP program to find the number of days in a month -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 1.7</title>
</head>
<body>
    <?php 
        $month = 3;

        function daysInAMonth($month){
            $month31 = array(1, 3, 5, 7, 8, 10, 12);
            
            if($month == 2) return 28;

            else if(in_array($month, $month31)) return 31;
            
            else return 30;
        }

        echo daysInAMonth($month)
    ?>
</body>
</html>