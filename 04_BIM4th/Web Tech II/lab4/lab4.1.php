<!-- Create a class with the name Triangle and add the methods to calculate the area and perimeter. Use the constructor that accepts the length of the triangle sides.  -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Triangle</title>
</head>
<body>
    <?php 
        class Triangle{
            private $length;
            private $height;
            private $base;


            public function __construct($length, $height, $base){
                $this->length = $length;
                $this->height = $height;
                $this->base = $base;
            }

            public function Area(){
                $area = 1/2 * $this->length * $this->height;
                echo "Area is : ".$area;
            }
            public function Perimeter(){
                $perimeter = $this->length + $this->height + $this->base;
                echo "<br />Perimeter is : ".$perimeter;
            }

        }
        $triangle = new Triangle(12, 14, 15);
        $triangle->Area();
        $triangle->Perimeter();

    ?>
</body>
</html>