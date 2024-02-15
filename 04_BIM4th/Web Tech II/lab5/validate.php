<?php
    if($_SERVER['REQUEST_METHOD'] === 'POST'){
        $email = $_POST['email'];
        
        foreach ($_POST as $key => $value){
            if($value == null)
                die("$key field cannot be empty");
        }

        $emailPattern = "/^[a-zA-Z0-9.-_]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,4}$/";
        if( !preg_match_all($emailPattern, $email, $matches)){
            die("Wrong Email Format");
        }

        echo '<table border="1">
            <tr>
                <th>Key</th>
                <th>Value</th>
            </tr>';
        foreach ($_POST as $key => $value){
            echo "<tr>
                <td>$key</td>
                <td>$value</td>
            </tr>";
        }
        echo "</table>";
    }
?>