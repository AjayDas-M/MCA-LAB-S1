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
                    <td> NAME <input type="text" placeholder="NAME" name="si"></td>
                    <td> QUANTITY <input type="text" placeholder="QUANTITY" name="qty"></td>
                    <td> UNIT PRICE <input type="text" placeholder="UNIT PRICE" name="unit"></td>
                    <td>exp_date MANUFACTURING DATE <input type="date" placeholder="MANUFACTURING DATE" name="manu"></td>
                    <td> EXPIRY DATE <input type="date" placeholder="EXPIRY DATE" name="exp"></td>

                </tr>
                <tr>
                    <td><input type="submit" value="Continue" name="btn"></td>
                    <td><input type="reset" value="Clear"></td>
                </tr>
            </table>

        </form>
    </center>


    <?php
        
        $connect = new mysqli("localhost","root","","market");
        if($connect->connect_error)
        {
            die('Connection Failed: ' .$connect->connect_error);
        
        }
        else
        {
            echo "DataBase Connected Successfully";
        }

        if(isset($_post['btn']))
        {
            $name = $_post['si'];
            $qty = $_post['qty'];
            $unit = $_post['unit'];
            $manu = $_post['manu'];
            $exp = $_post['exp'];
            $qry = "insert into product (name,quantity,unit_price,manu_date,exp_date) values('$name','$qty','$unit','$manu','$exp') ";
            if(mysqli_query($connect,$qry)) 
            {
                echo "Error";
            }
            else
            {
                echo mysqli_error($connect);
            }

        }
        ?>
       
       <center>
        <h1>PRODUCT DETAILS</h1>
        <table border="2">
         <tr align="center">
            <td> NAME </td>
            <td> QUANTITY </td>
            <td> UNIT PRICE </td>
            <td> MANUFACTURING DATE</td>
            <td> EXPIRY DATE </td>
    </tr  align="center">
        <?php
            $sl = "select * from product";
            $a = mysqli_query($connect,$sl);

            while($product = $a->fetch_assoc())
            {
                echo "<tr>";
                echo "<td>".$product['name']."</td>";
                echo "<td>".$product['quantity']."</td>";
                echo "<td>".$product['unit_price']."</td>";
                echo "<td>".$product['manu_date']."</td>";
                echo "<td>".$product['exp_date']."</td>";
                echo "</tr";
            }
        ?>


        <td>


        </tr>
        
    </table>
</center>


</body>

</html>

