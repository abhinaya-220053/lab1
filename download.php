
<html>
    <head>
        <meta charset="utf-8">
        <title>file uploaded</title>
</head>
<body>
    <h2> File upload</h2>

<?php
$folder="uploads/";
if(!is_dir($folder))
    {
        mkdir($folder);
    }
if(isset($_GET['download1']))
    {
        $file=$folder.basename($_GET['download1']);
        if(file_exists($file))
            {
            header("content-description:File transfer");
            header("content-type:application/octet-stream");
            header("content-disposition:attachment;filename=".basename($file));
            header("content-length:".filesize($file));
            readfile($filepath);
            exit;
            }
            else{
                echo "file not found!";
            }
    }
    if(isset($_POST['upload']))
        {
            $name=$_FILES['myfile']['name'];
            $temp=$_FILES['myfile']['tmp_name'];
            $path=$folder.$name;
            if(move_uploaded_file($temp,$path))
                {
                    echo "<p style='color:green;'>file uploaded successfully!</p>";
                    echo "<a herf='?download1=$name'><button>Download File</button></a>";
                }
                else{
                    echo "<p style='color:red;'>upload failed!</p>";
                }
        }
    ?>
    <form method="post" enctype="multipart/form-data">
        select file:
        <input type="file" name="myfile" required><br><br>
        <input type="submit" name="upload" value="upload file!">
</form>
</body>
</html>