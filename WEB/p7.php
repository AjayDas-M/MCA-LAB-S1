<?php
	$connect = new mysqli("localhost","root","");
    if($connect->connect_error)
    {
        die('Connection failed'.$connect->connect_error);
    }
    $db = "CREATE DATABASE market";
    if($connect->query($db)==TRUE)
    {
        echo "DATABASE CREATED SUCCESSFULLY with name market";

    }
    else
    {
        echo "ERROR While creating database".$connect->error;
    }
    $connect = new mysqli("localhost","root","","market");

    $sl = "CREATE TABLE product(name varchar(20) primary key,quantity int(100) not null,unit_price int(100) not null,manu_date date,exp_date date)";
    if($connect->query($sl) == TRUE)
    {
        echo "TABLE created successfully with name student";
    }
    else
    {
        echo "Error while creating table".$connect->error;
    }
    
    $connect->close();

?>