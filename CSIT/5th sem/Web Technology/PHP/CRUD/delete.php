<?php
include 'db.php';
$id = $_GET['id'];

$sql = "DELETE FROM users WHERE id=$id";

if (mysqli_query($conn, $sql)) {
    header("Location: index.php");
} else {
    echo "Error: ". mysqli_error($conn);
}
?>
