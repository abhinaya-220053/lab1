<?php
//datatypes
echo "Datatypes in PHP <br>";
$name="Abhinaya";
$age=19;
$percentage=8.7;
$ispassed=true;
$marks=array(85,88,92,87);

//if we use gettype() function it shows only the datatype of variable
//if we use var_dump() function it shows the datatype and value of variable
var_dump($name);
echo "<br>";
var_dump($age);
echo "<br>";
var_dump($percentage);
echo "<br>";
var_dump($ispassed);
echo "<br>";
var_dump($marks);
echo "<br>";

//variable scope
echo "<br>Variable Scope in PHP <br>";
echo "1.local scope <br>";
function lsexample(){
    $var1 =" it is a local variable";
    echo $var1."<br>";
}
//echo $var1."<br>"; it shows error because local variable cant be accessed outside the function
lsexample();

echo "2.global scope <br>";
$var2="hello"; //global variable
function gsexample(){
    global $var2; 
    $var2 =" it is a global variable ".$var2;
    echo $var2."<br>";
}
//echo $var2."<br>"; it shows error because global variable cant be accessed outside the function without global keyword
//echo $var2;
gsexample();

echo "3.static scope <br>";
function ssexample(){
    static $var3=0;
    $var3++;
    echo "static variable value: ".$var3."<br>";
}
ssexample();
ssexample();
ssexample();    
//echo "static variable value: ".$var3."<br>"; it shows error because static variable cant be accessed outside the function
