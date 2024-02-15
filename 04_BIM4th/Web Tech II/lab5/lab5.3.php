<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 5.3</title>
</head>
<body>
    <?php 
        $username = "";
        $password = "";
        $color = "";
        $message = "";

        if($_SERVER['REQUEST_METHOD'] === 'POST'){
            $username = $_POST['username'];
            $password = $_POST['password'];

            if($username === 'SuperUser' && $password === 'California'){
                $message = "Login Succesful";
                $color = "green";
            }
            else{
                $message = "Invalid User";
                $color = "red";
            }
        }
    ?>
    <form action='<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>' method="post">
        <label for="username">Username: </label>
        <input type="text" name="username" value='<?php echo $username; ?>'> <br><br>

        <label for="password">Password: </label>
        <input type="password" name="password" value="<?php echo $password; ?>"><br><br>

        <input type="submit">
    </form> <br>
    <span style="color: <?php echo $color; ?>"><?php echo $message; ?></span>
</body>
</html>