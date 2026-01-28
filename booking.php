<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Database connection
$conn = mysqli_connect("localhost", "root", "", "testdb");
if (!$conn) {
    die("Database connection failed: " . mysqli_connect_error());
}

// Form data
$name     = $_POST['username'] ?? '';
$pickup   = $_POST['pickuplocation'] ?? '';
$drop     = $_POST['dropofflocation'] ?? '';
$address  = $_POST['address'] ?? '';
$city     = $_POST['selecte_near_city'] ?? '';
$email    = $_POST['email'] ?? '';
$vehicle  = $_POST['vechicle_type'] ?? '';
$travel   = $_POST['traver_or_parcel'] ?? '';

// File upload
$file = "";
if (!empty($_FILES['locationfile']['name'])) {
    $file = $_FILES['locationfile']['name'];
    $tmp  = $_FILES['locationfile']['tmp_name'];

    if (!is_dir("uploads")) {
        mkdir("uploads", 0777, true);
    }
    move_uploaded_file($tmp, "uploads/" . $file);
}

// ✅ INSERT QUERY WITH BACKTICKS FOR SPACE & SLASH COLUMNS
$sql = "INSERT INTO booking_a_vehicle
(`NAME`, `PICKUP LOCATION`, `DROP LOCATION`, `LOCATION FILE`, `ADDRESS`, `NEAREST CITY`, `EMAIL`, `VECHICLE`, `TRAVEL/PAECEL`)
VALUES
('$name', '$pickup', '$drop', '$file', '$address', '$city', '$email', '$vehicle', '$travel')";

if (mysqli_query($conn, $sql)) {
    echo "✅ Booking inserted successfully";
} else {
    echo "❌ MySQL Error: " . mysqli_error($conn);
}

mysqli_close($conn);
?>
