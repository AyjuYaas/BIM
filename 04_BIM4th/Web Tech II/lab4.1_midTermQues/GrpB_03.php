<!-- Create a calculator class that should be able to calculate the sum, difference, multiplication and division of numbers -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculator</title>
</head>
<body>
    <?php 
        class Calculator{
            private $num1;
            private $num2;

            public function __construct($a, $b)
            {
                $this->num1 = $a;
                $this->num2 = $b;
            }

            public function sum(){
                return $this->num1 + $this->num2;
            }
            public function difference(){
                return $this->num1 - $this->num2;
            }
            public function multiplication(){
                return $this->num1 * $this->num2;
            }
            public function division(){
                return $this->num1 / $this->num2;
            }
        }

        $cal = new Calculator(4, 2);
        echo "Sum = " . $cal->sum().
        "<br />Difference = " . $cal->difference().
        "<br />Multiplication = " . $cal->multiplication().
        "<br />Division = " . $cal->division() 
    ?>
</body>
</html>