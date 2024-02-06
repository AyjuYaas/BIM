<!-- Write a PHP function that accepts the string as parameter and converts it to Pascal case  -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Group B Q4</title>
</head>
<body>
    <?php
        function pascalCase($str){
            return ucfirst($str);
        }

        $str = "hello my name is sayujya";
        print_r ( implode( " ", array_map( "pascalCase", explode( " ", $str ) ) ) );
    ?>
</body>
</html>