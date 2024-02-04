<!-- Create the abstract class with the name 'Shape' and it should be inherited by three other classes for Rectangle, Circle and Triangle. Each class should have the method to create the area.-->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Abstract Class</title>
</head>
<body>
    <?php 
        abstract class Shape{
            abstract public function area();
        }

        class Rectangle extends Shape{

            private $l;
            private $b;

            public function __construct($l, $b){
                $this->l = $l;
                $this->b = $b;
            }

            public function area(){
                return $this->l * $this->b;
            }
        }

        class Circle extends Shape{
            private $r;
            public function __construct($r)
            {
                $this->r = $r;
            }
            public function area(){
                return 2 * 3.14 * $this->r;
            }
        }

        class Triangle extends Shape{
            private $h;
            private $b;
            public function __construct($h, $b)
            {
                $this->h = $h;
                $this->b = $b;
            }
            public function area(){
                return 1/2*$this->b*$this->h;
            }
        }

        $rec = new Rectangle(2, 4);
        $cir = new Circle(3);
        $tri = new Triangle(4, 5);

        echo $rec->area() . "<br />" . $cir->area() . "<br />" . $tri->area() . "<br />" 
    ?>
</body>
</html>