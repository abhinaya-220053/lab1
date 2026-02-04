<?php
$conn = mysqli_connect("localhost", "root", "", "testdb");

if (!$conn) {
    die("Database connection failed: " . mysqli_connect_error());
}
if($_SERVER['REQUEST_METHOD'] != 'POST'){
    die("Invalid access method");
}
$name    = $_POST['username'] ?? '';
$pickup  = $_POST['pickuplocation'] ?? '';
$drop    = $_POST['dropofflocation'] ?? '';
$address = $_POST['address'] ?? '';
$city    = $_POST['selecte_near_city'] ?? '';
$email   = $_POST['email'] ?? '';
$vehicle = $_POST['vechicle_type'] ?? '';
$travel  = $_POST['traver_or_parcel'] ?? '';
$name    = trim($name);
$pickup  = trim($pickup);
$drop    = trim($drop);
$address = trim($address);
$city    = trim($city);
$email   = trim($email);

$name    = htmlspecialchars($name);
$pickup  = htmlspecialchars($pickup);
$drop    = htmlspecialchars($drop);
$address = htmlspecialchars($address);
$city    = htmlspecialchars($city);
$email   = htmlspecialchars($email);

$name    = addslashes($name);
$pickup  = addslashes($pickup);
$drop    = addslashes($drop);
$address = addslashes($address);
$name   = ucwords(strtolower($name));
$pickup = ucwords(strtolower($pickup));
$drop   = ucwords(strtolower($drop));
if (strlen($name) < 3) {
    die("Name must contain at least 3 characters");
}

if (strlen($pickup) < 3 || strlen($drop) < 3) {
    die("Pickup and Drop locations must contain at least 3 characters");
}

if (strlen($address) < 5) {
    die("Address must contain at least 5 characters");
}

if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
    die("Invalid email format");
}

if (empty($vehicle)) {
    die("Please select a vehicle type");
}

if (empty($travel)) {
    die("Please select Travel or Parcel service");
}
$file = "";

if (!empty($_FILES['locationfile']['name'])) {
    $file = $_FILES['locationfile']['name'];
    $tmp  = $_FILES['locationfile']['tmp_name'];

    if (!is_dir("uploads")) {
        mkdir("uploads", 0777, true);
    }

    move_uploaded_file($tmp, "uploads/" . $file);
}


$sql = "INSERT INTO booking_a_vehicle
(`NAME`, `PICKUP LOCATION`, `DROP LOCATION`, `LOCATION FILE`,
 `ADDRESS`, `NEAREST CITY`, `EMAIL`, `VECHICLE`, `TRAVEL/PAECEL`)
VALUES
('$name', '$pickup', '$drop', '$file',
 '$address', '$city', '$email', '$vehicle', '$travel')";

if (mysqli_query($conn, $sql)) {
    echo "<h2>Booking Successful</h2>";
    echo "Name: $name <br>";
    print "Pickup: $pickup <br>";
    print "Drop: $drop <br>";
} else {
    die("MySQL Error: " . mysqli_error($conn));
}

mysqli_close($conn);
?>


