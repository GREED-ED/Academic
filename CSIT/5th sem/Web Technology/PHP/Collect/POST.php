<?php
$email = $_POST['email'];
$message = $_POST['message'];

echo "Email received: " . $email . "<br>";
echo "Message: " . nl2br($message);
?>
