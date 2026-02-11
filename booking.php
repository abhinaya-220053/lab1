<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);
$conn = mysqli_connect("localhost", "root", "", "testdb");

if (!$conn) {
    die(" Database connection failed: " . mysqli_connect_error());
}

$name     = $_POST['username'] ?? '';
$pickup   = $_POST['pickuplocation'] ?? '';
$drop     = $_POST['dropofflocation'] ?? '';
$address  = $_POST['address'] ?? '';
$city     = $_POST['selecte_near_city'] ?? '';
$email    = $_POST['email'] ?? '';
$vehicle  = $_POST['vechicle_type'] ?? '';
$service  = $_POST['traver_or_parcel'] ?? '';
$name    = trim(htmlspecialchars($name));
$pickup  = trim(htmlspecialchars($pickup));
$drop    = trim(htmlspecialchars($drop));
$address = trim(htmlspecialchars($address));
$city    = trim(htmlspecialchars($city));
$email   = trim(htmlspecialchars($email));

$name    = ucwords(strtolower($name));
$pickup  = ucwords(strtolower($pickup));
$drop    = ucwords(strtolower($drop));
if (strlen($name) < 3) {
    die(" Name must be at least 3 characters");
}

if (strlen($pickup) < 3 || strlen($drop) < 3) {
    die("Pickup and Drop location must be at least 3 characters");
}

if (strlen($address) < 5) {
    die("Address must be at least 5 characters");
}

if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
    die("Invalid email format");
}

if (empty($vehicle)) {
    die("Please select a vehicle type");
}

if (empty($service)) {
    die("Please select Travel or Parcel");
}

$file_name = "";

if (!empty($_FILES['locationfile']['name'])) {
    $file_name = time() . "_" . $_FILES['locationfile']['name'];
    $tmp_name  = $_FILES['locationfile']['tmp_name'];

    if (!is_dir("uploads")) {
        mkdir("uploads", 0777, true);
    }

    move_uploaded_file($tmp_name, "uploads/" . $file_name);
}


$sql = "INSERT INTO booking_a_vehicle
(`NAME`, `PICKUP LOCATION`, `DROP LOCATION`, `LOCATION FILE`,
 `ADDRESS`, `NEAREST CITY`, `EMAIL`, `VECHICLE`, `TRAVEL/PAECEL`)
VALUES
('$name', '$pickup', '$drop', '$file_name',
 '$address', '$city', '$email', '$vehicle', '$service')";

if (mysqli_query($conn, $sql)) {
    echo "<h2>Booking Successful</h2>";
    echo "Name: $name <br>";
    echo "Pickup Location: $pickup <br>";
    echo "Drop Location: $drop <br>";
    echo "Vehicle: $vehicle <br>";
    echo "Service: $service <br>";
    if(!empty($file_name))
        {
            echo "<a herf='download.php? file=$file_name'>download uploaded file</a>";
        }
} else {
    die("MySQL Error: " . mysqli_error($conn));
}

mysqli_close($conn);
?>






