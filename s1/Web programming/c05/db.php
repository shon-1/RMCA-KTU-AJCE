<?php

$con=mysqli_connect("localhost","root","","reg");
if($con)
		echo "Database is conneted <br>";
else
	echo "not connected";

?>