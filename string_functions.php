<?php
$username = " Abhinaya";
$password = " 12345";
echo "Hardcoded Username:".$username."<br>";
echo "Hardcoded Password:".$password."<br>";
 
echo "string functions in PHP <br>";
echo "basic string functions:<br>";
$str=" Hello World ";
echo "Original String:".$str."<br>";
//strlen() function
$length = strlen($str);
echo "Length of the string: ".$length."<br>";
//str_word_count() function
$wordcount = str_word_count($str);  
echo "Word count of the string: ".$wordcount."<br>";
//strrev() function
$reversed = strrev($str);
echo "Reversed string: ".$reversed."<br>";
echo "case conversions:<br>";
//strtoupper() function
$upper = strtoupper($str);
echo "Uppercase string: ".$upper."<br>";    
//strtolower() function
$lower = strtolower($str);
echo "Lowercase string: ".$lower."<br>";
//ucfirst() function
$ucfirst = ucfirst($str);
echo "First letter uppercase: ".$ucfirst."<br>";
//ucwords() function
$ucwords = ucwords($str);
echo "Each word first letter uppercase: ".$ucwords."<br>";
//search and replace
echo "search and replace<br>";
//strpos() function
$position = strpos($str, "World");
echo "Position of 'World' in the string: ".$position."<br>";
//str_replace() function
$replaced = str_replace("World", "PHP", $str);
echo "String after replacement: ".$replaced."<br>";

echo "substring & trimming:<br>";
//substr() function
$substring = substr($str, 1, 5);
echo "Substring (1,5): ".$substring."<br>";
//trim() function
$trimmed = trim($str);
echo "Trimmed string: '".$trimmed."'<br>";
//ltrim() function
$ltrimmed = ltrim($str);
echo "Left Trimmed string: '".$ltrimmed."'<br>";
//rtrim() function
$rtrimmed = rtrim($str);
echo "Right Trimmed string: '".$rtrimmed."'<br>";

echo "string Comparison:<br>";
$str1 = "Hello";
$str2 = "hello";
//strcmp() function
$comparison = strcmp($str1, $str2);
echo "String comparison between '$str1' and '$str2': ".$comparison."<br>";
//strcasecmp() function
$strcmp_case = strcasecmp($str1, $str2);
echo "strcasecmp($str1, $str2): ".$strcmp_case."<br>";
//special characters &security:<br>";
$special_str = "<p>Hello World!<p>";
echo "Original String with HTML: ".$special_str."<br>";
//htmlspecialchars() function
$safe_str = htmlspecialchars($special_str);
echo "String after htmlspecialchars(): ".$safe_str."<br>";
//addslashes() function
$quote_str = "It's a beautiful day!";
$safe_quote_str = addslashes($quote_str);
echo "Original String with quote: ".$quote_str."<br>";
echo "String after addslashes(): ".$safe_quote_str."<br>";

?>

