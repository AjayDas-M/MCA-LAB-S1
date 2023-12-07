<html>

<head>
    <title>STUDENT MARKS</title>
</head>

<body>

    <form method="POST">

        Name : <input type="text" name="name1"> &nbsp;
        maths : <input type="text" name="maths1"> &nbsp;
        Physics : <input type="text" name="phy1"> &nbsp;
        Chemistry : <input type="text" name="che1"> <br><br>
        <input type="submit" value="SAVE" name="save"> &nbsp; &nbsp;
        <input type="reset" value="CLEAR">

    </form>

</body>

</html>

<?php

    if(isset($_POST['save']))
    {
        $name = $_POST['name1'];
        $maths = $_POST['maths1'];
        $phy = $_POST['phy1'];
        $che = $_POST['che1'];

    }

?>

<html>
<table border="2">

    <tr>
        <th>Name</th>
        <td colspan="2">
            <?php echo $name; ?>
        </td>
    </tr>

    <tr>

        <th> SUBJECTS </th>
        <th> MARK </th>
        <th> STATUS </th>
    </tr>

    <tr>
        <th>MATHS</th>
        <td>
            <?php echo $maths; ?>
        </td>
        <th>
            <?php  
                if($maths<25)
                {
                    echo "FAILED";
                }
                else
                {
                    echo "PASSED";
                }
            ?>
        </th>
    </tr>

    <tr>
        <th>PHYSICS</th>
        <td>
            <?php echo $phy; ?>
        </td>
        <th>
            <?php  
                if($phy<25)
                {
                    echo "FAILED";
                }
                else
                {
                    echo "PASSED";
                }
            ?>
        </th>
    </tr>

    <tr>
        <th>CHEMISTRY</th>
        <td>
            <?php echo $che; ?>
        </td>
        <th>
            <?php  
                if($che<25)
                {
                    echo "FAILED";
                }
                else
                {
                    echo "PASSED";
                }
            ?>
        </th>
    </tr>



</table>

</html>