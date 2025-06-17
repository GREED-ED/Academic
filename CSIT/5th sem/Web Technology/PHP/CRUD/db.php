<?php
$host = "localhost";
$user = "Prashan";
$pass = "prashan123";
$db = "crud";
$port = 3308;

$conn = mysqli_connect($host, $user, $pass, $db, $port);

if(!$conn){
    echo "Connection error: ". mysqli_connect_error();
}
?>
