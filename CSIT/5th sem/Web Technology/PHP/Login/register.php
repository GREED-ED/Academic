<?php
include "db.php";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['username'];
    $email = $_POST['email'];
    $password = password_hash($_POST['password'], PASSWORD_DEFAULT); // secure hash

    $sql = "INSERT INTO users (username, email ,password) VALUES ('$username', '$email', '$password')";
    if (mysqli_query($conn, $sql)) {
        echo "Registered successfully. <a href='login.php'>Login</a>";
        header("Location: login.php");
    } else {
        echo "Error: " . mysqli_error($conn);
    }
}
?>

<h2>Register</h2>
<form method="POST">
    Username: <input type="text" name="username" required><br><br>
    Email: <input type="email" name="email" required><br><br>
    Password: <input type="password" name="password" required><br><br>
    <input type="submit" value="Register"><br><br>
    Already have an account? <a href="login.php">LogIn</a>
</form>
