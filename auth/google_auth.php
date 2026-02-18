<?php
$client_id = "YOUR_CLIENT_ID";
$redirect_uri = "http://localhost/wt/auth/callback.php";

$scope = "email profile";

$auth_url = "https://accounts.google.com/o/oauth2/v2/auth?" . http_build_query([
    "client_id" => $client_id,
    "redirect_uri" => $redirect_uri,
    "response_type" => "code",
    "scope" => $scope,
    "access_type" => "offline",
    "prompt" => "consent"
]);
?>

<a href="<?= $auth_url ?>">
    <button>Login with Google</button>
</a>