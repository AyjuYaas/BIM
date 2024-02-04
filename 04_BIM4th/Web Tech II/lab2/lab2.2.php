<!-- WAP in PHP to display the first twenty letters from a string. Last word should be complete. -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 2.2</title>
</head>
<body>
    <?php
        $str = "Rishtein meinn toh hum tumhare baap lagte hai, naam hai Sayujya?";

        $strLength = mb_strlen($str);
        
        if($strLength <= 20) echo $str;
        else{
            if($str[20] == " ") echo substr($str, 0, 20);

            else{
                $i = 20;
                while ($i < $strLength && $str[$i] != " ")
                    $i++;
                echo substr($str, 0, $i);
            }
        }
    ?>
</body>
</html>