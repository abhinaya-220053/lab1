<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

$conn = mysqli_connect("localhost", "root", "", "testdb");
if (!$conn) {
    die("Database connection failed: " . mysqli_connect_error());
}

$harduser = "abhinaya";
$hardpassword = "12345";

if (isset($_POST['username']) && isset($_POST['password'])) {

    $user = strtolower(trim($_POST['username']));
    $pass = trim($_POST['password']);

    if (strlen($user) < 3) {
        die("Username must be at least 3 characters long");
    }

    if (strlen($pass) < 5) {
        die("Password must be at least 5 characters long");
    }
    // INSERT INTO DATABASE (FIXED)
    $sql = "INSERT INTO login_rapido (`NAME`, `PASSWORD`)
            VALUES ('$user', '$pass')";

    if (mysqli_query($conn, $sql)) {
        echo "Data inserted successfully <br>";
    } else {
        die("SQL Error: " . mysqli_error($conn));
    }

    echo "Entered Username: $user <br>";
    echo "Entered Password: $pass <br><br>";

    if ($user == $harduser && $pass == $hardpassword) {
        echo "Login successful";
    } else {
        echo "Invalid username or password";
    }

} else {
    echo "Please enter username and password";
}
?>



