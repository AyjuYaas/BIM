<!-- Write a program in OOP that stores the information of employees. Each employee should store the employeeId, fullname, email and monthly salary. Display them in the html table computing their yearly salary.  -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Salary</title>

</head>
<body>
    <table border="1" width="30%">
            <tr>
                <th>Id</th>
                <th>Name</th>
                <th>Email</th>
                <th>Yearly Salary</th>
            </tr>
    <?php 
        class Employee {
            public $employeeId;
            public $fullName;
            public $email;
            public $salary;

            public function __construct($i, $fn, $e, $s)
            {
                $this->employeeId = $i;
                $this->fullName = $fn;
                $this->email = $e;
                $this->salary = $s;
            } 
        }

        $em = array();

        $em[0] = new Employee(1, "Sayu", "sayu@gmail.com", 50000);
        $em[1] = new Employee(1, "Sandy", "sandi@gmail.com", 10000);
        $em[2] = new Employee(1, "Sarun", "sarun@gmail.com", 20000);

        foreach($em as $e){
            echo '<tr>
                <td>'. $e->employeeId .'</td>
                <td>'. $e->fullName .'</td>
                <td>'. $e->email .'</td>
                <td>'. $e->salary * 12 .'</td>
            </tr>';
        }
    ?>
    </table>
</body>
</html>