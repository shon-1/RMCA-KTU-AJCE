
<h2 style=align:'left' ><a href="view.php">View table</a></h3>

<center>
<h3><b>Registration Form</b></h3>
<br><br><hr><br><br>

<form method="post" action="#" enctype="multipart/form-data">
<table  height="300" border=1> 
<tr>
<th>NAME :</th>
<td><input type="text" name="name" ></td>
</tr>
<tr>
<th>ADDRESS</th>
<td><textarea  name="add"></textarea></td>
</tr>
<tr>
<th>Phone NUmber</th>
<td><input type="text" name="num"></td>
</tr>
<th>Image</th>
<td><input type="file" name="img"></td>
</tr>

<tr>
<td></td>
<td><input type="submit" name="btn" </td>
</tr>
</table>

<div id="kl">
</div>
</form>
<br><br><hr><br><br>

 <?php
include 'db.php';
if(isset($_POST["btn"]))
{
	$name=$_POST["name"];
	$add=$_POST["add"];
	$num=$_POST["num"];
	
	$pic=$_FILES["img"]["name"];
	$pic1=$_FILES["img"]["type"];
	$pic2=$_FILES["img"]["full_path"];
	
	#print_r($_FILES);exit;
	echo $pic;#exit;
	
	move_uploaded_file($_FILES["img"]["tmp_name"],"upload/".$_FILES["img"]["name"]);
	#exit;
	
	$sql="INSERT INTO`student`(`Name`,`Adrress`,`Number`,`photo`)VALUES('$name','$add','$num','$pic')";
	$r=mysqli_query($con,$sql);
	if($r==1)
		echo "<br> Values inserted !";
	
		header("location:view.php");
	
}


?>

