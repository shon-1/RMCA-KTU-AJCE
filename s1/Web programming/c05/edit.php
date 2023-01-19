Edit
<?php
include 'db.php';

$id=$_GET["lib2"];

$result=mysqli_query($con,"SELECT * FROM `student` WHERE `rid`= '$id'");
$row=mysqli_fetch_array($result);

#print_r($result);
	
	
if(isset($_POST["btn"]))
{
	$name=$_POST["name"];
	$add=$_POST["add"];
	$num=$_POST["num"];
	
	$sql="UPDATE `student` SET `Name`='$name',`Adrress`='$add',`Number`='$num=' WHERE `rid`='$id'";
	$r=mysqli_query($con,$sql);
	if($r==1)
		echo "<br> Values updated !";
	
	header("location:view.php");
	
}	
?>


<center>
<h3><b>Registration Form</b></h3>
<form method="post" action="#">
<table style="back-ground:aqua" height="300" border=1> 
<tr>
<th>NAME :</th>
<td><input type="text" name="name" value="<?php echo($row["Name"]);?>" ></td>
</tr>
<tr>
<th>ADDRESS</th>
<td><input type="textarea"  name="add" value="<?php echo($row["Adrress"]);?>"></td>
</tr>
<tr>
<th>Phone NUmber</th>
<td><input type="text" name="num"value="<?php echo($row["Number"]);?>"></td>
</tr>

<tr>
<td></td>
<td><input type="submit" name="btn" </td>
</tr>
</table>

<div id="kl">
</div>
</form>