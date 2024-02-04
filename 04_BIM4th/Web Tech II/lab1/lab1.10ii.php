<!-- 
    *
   **
  ***
 ****
***** 
-->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 1.10 ii</title>
</head>
<body>
    <?php 
        for($i = 1; $i<=5; $i++){
            for($j = 5; $j > $i; $j--){
                echo "&nbsp&nbsp"; //Equivalent to one space character: " "
            }
            for($k=1; $k<=$i; $k++){
                echo "*";
            }
            echo "<br/>";
        }
    ?>
</body>
</html>