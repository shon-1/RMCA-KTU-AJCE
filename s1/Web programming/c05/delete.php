<center><br><br><br>
Element Deleted !!!
<?php
include 'db.php';

$name=$_GET["lib"];
	
echo $name;

$result=mysqli_query($con,"DELETE FROM `student` WHERE  `Rid` ='$name'");
header("location:view.php");
	
?>