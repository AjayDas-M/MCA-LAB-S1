<html>

<head>
    <title> BILL </title>
</head>

<body>
    <center>
        <h1>BILL DETAILS</h1>
        <form name="bill" method="POST">
            <table cellpadding="5">
                <tr>
                    <td> SI NO <input type="text" placeholder="SI Number" name="si1"></td>
                    <td> ITEM NAME <input type="text" placeholder="Product" name="product1"></td>
                    <td> QUANTITY <input type="text" placeholder="Quantity" name="qty1"></td>
                    <td> ITEM PRICE <input type="text" placeholder="PRICE" name="price1"></td>
                </tr>
                <tr>
                    <td><input type="submit" value="Continue" name="btn"></td>
                    <td><input type="reset" value="Clear"></td>
                </tr>
            </table>

        </form>
    </center>
</body>

</html>
<?php
    if(isset($_POST['btn']))
    {
        $si1=$_POST['si1'];
        $product1=$_POST['product1'];
        $qty1=$_POST['qty1'];
        $price1=$_POST['price1'];
        $total1=$price1*$qty1;

    }
?>
<html>
<center>
    <h1>FINAL BILL</h1>
    <table border="2">
        <tr align="center">
            <td>SI NO <br>
                <?php echo $si1 ?>
            </td>
            <td>ITEM <br>
                <?php echo $product1 ?>
            </td>
            <td>UNIT PRICE <br>
                <?php echo $price1 ?>
            </td>
            <td>QUANTITY <br>
                <?php echo $qty1 ?>
            </td>
            <td>TOTAL <br>
                <?php echo $total1 ?>
            </td>
        </tr>
    </table>
</center>

</html>