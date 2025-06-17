<?php
$serverName = "localhost";
$userName = "";
$password = "";
$dbName = "web_dev";
$port = 3308;
$conn = mysqli_connect($serverName,$userName, $password, $dbName, $port);

// Check
if(!$conn){
    echo "Connection error: ". mysqli_connect_error();
} 

// Create database
$sql = "CREATE DATABASE myDB";
if (mysqli_query($conn, $sql)) {
    echo "Database created successfully!";
} else {
    echo "Error: ". mysqli_error($conn);
}

mysqli_close($conn);

?>
