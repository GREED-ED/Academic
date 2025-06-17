<?php
include 'db.php';
$id = $_GET['id'];

$sql = "SELECT * FROM users WHERE id=$id";
$result = mysqli_query($conn, $sql);
// $row = $result->fetch_assoc();
$row = mysqli_fetch_assoc( $result);

?>

<!DOCTYPE html>
<html>
<body>
<h2>Edit User</h2>
<form action="update.php" method="POST">
    <input type="hidden" name="id" value="<?= $row['id'] ?>">
    Name: <input type="text" name="name" value="<?= $row['name'] ?>" required><br><br>
    Email: <input type="email" name="email" value="<?= $row['email'] ?>" required><br><br>
    <input type="submit" value="Update">
</form>
</body>
</html>
