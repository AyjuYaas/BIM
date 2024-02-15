<!-- Modify the above program to load the default values for each field.-->
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Lab 5.2</title>
  </head>
  <body>

    <form action="./validate.php" method="post">
      <label for="username">Username: </label>
      <input type="text" name="username" value="<?php echo'Username' ?>" /> <br />
      <br />

      <label for="password">Password: </label>
      <input type="password" name="password" value="<?php echo'Password' ?>"/> <br />
      <br />

      <label for="email">Email: </label>
      <input type="text" name="email" value="<?php echo'example@example.com' ?>"/> <br />
      <br />

      <label for="gender">Gender: </label>
      <input type="radio" name="gender" value="male" checked/>Male <input type="radio" name="gender" value="female" />Female
      <input type="radio" name="gender" value="other" />Other <br />
      <br />

      <label for="country">Country: </label>
      <select name="country">
        <option value="nepal" selected>Nepal</option>
        <option value="india">India</option>
        <option value="china">China</option>
      </select>
      <br />
      <br />

      <label for="hobbies">Hobbies: </label><br />
      <textarea name="hobbies" cols="30" rows="10"><?php echo'Your Hobbies' ?></textarea> <br /><br />
      <input type="submit" />
    </form>
  </body>
</html>
