 <?php
include 'db.php';
?>
<br>
<h2 style=align:'left' ><a href="DB!.php">register</a></h3>
<center>
<br><br><hr><br><br>
<table border="1">
<tr>
<td>id</td>
<td>nane</td>
<td>Adrress</td>
<td>phone num:</td>
<td>Edit</td>
<td>Delete</td>
</tr>
<?php
	$result=mysqli_query($con,"SELECT * FROM `student`");
	
	while($row=mysqlI_fetch_array($result))
	
	{	
?>
	<tr>
	<td><?php echo $row["rid"];?></td>
	<td><?php echo $row["Name"];?></td>
	<td><?php echo $row["Adrress"];?></td>
	<td><?php echo $row["Number"];?></td>
	<td><a href="edit.php.?lib2=<?php echo $row["rid"] ?>">Edit</a></td>
	<td><a href="delete.php.?lib=<?php echo $row["rid"] ?>">Remove</a></td>
	<?php } ?>
</table>
<br><br><hr><br><br>

