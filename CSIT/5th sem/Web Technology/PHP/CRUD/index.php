<?php include 'db.php'; ?>

<!DOCTYPE html>
<html>
<body>
<h2>User List</h2>
<a href="create.php">Add New</a>
<table border="1" cellpadding="10">
<tr>
    <th>ID</th><th>Name</th><th>Email</th><th>Actions</th>
</tr>

<?php
$sql = "SELECT * FROM users";
$result =  mysqli_query($conn, $sql);
$info = mysqli_fetch_all( $result, MYSQLI_ASSOC);

foreach($info as $row):
    echo "<tr>
            <td>{$row['id']}</td>
            <td>{$row['name']}</td>
            <td>{$row['email']}</td>
            <td>
                <a href='edit.php?id={$row['id']}'>Edit</a> | 
                <a href='delete.php?id={$row['id']}'>Delete</a>
            </td>
          </tr>";
endforeach;
?>
</table>
</body>
</html>
