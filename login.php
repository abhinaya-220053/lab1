<?php
// Hardcoded login credentials
$harduser = "abhinaya";
$hardpassword = "12345";

error_reporting(E_ALL);
ini_set('display_errors', 1);

// Database connection
$conn = mysqli_connect("localhost", "root", "", "testdb");
if (!$conn) {
    die("Database connection failed: " . mysqli_connect_error());
}

if (isset($_POST['username']) && isset($_POST['password'])) {

    // Get user input
    $user = $_POST['username'];
    $pass = $_POST['password'];

    // Remove extra spaces
    $user = trim($user);
    $pass = trim($pass);

    // Convert special characters to HTML-safe characters
    $user = htmlspecialchars($user);
    $pass = htmlspecialchars($pass);

    // Add slashes for special characters
    $user = addslashes($user);
    $pass = addslashes($pass);

    // Convert username to lowercase
    $user = strtolower($user);

    // Username length validation
    if (strlen($user) < 3) {
        die("Username must be at least 3 characters long");
    }

    // Password length validation
    if (strlen($pass) < 5) {
        die("Password must be at least 5 characters long");
    }
    echo "Entered Username: $user <br>";
    echo "Entered Password: $pass <br><br>";

    if ($user == $harduser && $pass == $hardpassword) {
        echo "Login successful";
    } else {
        echo "Invalid username or password";
    }

} else {
    // Stop execution if form is not submitted properly
    die("Please enter username and password in login page");
}
?>
