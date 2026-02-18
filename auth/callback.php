



<?php
$client_id = "YOUR_CLIENT_ID";
$client_secret = "YOUR_CLIENT_SECRET";
$redirect_uri = "http://localhost/wt/auth/google_auth.php";

if (isset($_GET['code'])) {

    $token_url = "https://oauth2.googleapis.com/token";

    $data = [
        "code" => $_GET['code'],
        "client_id" => $client_id,
        "client_secret" => $client_secret,
        "redirect_uri" => $redirect_uri,
        "grant_type" => "authorization_code"
    ];

    $ch = curl_init($token_url);
    curl_setopt($ch, CURLOPT_POST, true);
    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

    $response = curl_exec($ch);
    curl_close($ch);

    $token = json_decode($response, true);

    $userinfo = file_get_contents(
        "https://www.googleapis.com/oauth2/v1/userinfo?access_token=" . $token['access_token']
    );

    $user = json_decode($userinfo, true);

    echo "<h2>Login Successful </h2>";
    echo "Name: " . $user['name'] . "<br>";
    echo "Email: " . $user['email'];
}

