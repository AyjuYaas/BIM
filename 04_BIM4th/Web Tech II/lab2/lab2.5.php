<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>lab 2.5</title>
</head>
<body>
    <table border="1" width="330px">
        <tr>
            <th>Item</th>
            <th>Quantity</th>
            <th>Rate</th>
            <th>Total</th>
        </tr>
        <tr>
            <td>Hamburger</td>
            <?php
                $quantity = 2;

                $rateHam = 150.99;
                $rateSand = 100.95;

                $totalHam = $quantity * $rateHam;
                $totalSan = $quantity * $rateSand;
                $total = $totalHam + $totalSan;

                $serviceCharge = ($total * 10)/100;
                $total += $serviceCharge;
                $discount = ($total * 7)/100;
                $total -= $discount;

                print ("<td>$quantity</td>
                        <td>$rateHam</td>
                        <td>$totalHam</td>
                    </tr>
                    <tr>
                        <td>Sandwich</td>
                        <td>$quantity</td>
                        <td>$rateSand</td>
                        <td>$totalSan</td>
                    </tr>
                    <tr>
                        <td>Service Chanrge</td>
                        <td></td>
                        <td>10%</td>
                        <td>$serviceCharge</td>
                    </tr>
                    <tr>
                        <td>Discount</td>
                        <td></td>
                        <td>7%</td>
                        <td>$discount</td>
                    </tr>
                    <tr>
                        <td></td>
                        <td></td>
                        <td>Grand Total</td>
                        <td>$total</td>
                    </tr>"
                );
            ?>
    </table>
</body>
</html>