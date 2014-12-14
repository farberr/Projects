<?php

$dbhost = 'oniddb.cws.oregonstate.edu';
// $dbname = 'wuhua-db';
// $dbuser = 'wuhua-db';
// $dbpass = 'HHP9EjGpjOIhG9Xh';
$dbname = 'phommata-db';
$dbuser = 'phommata-db';
$dbpass = 'Lm0QgLxFUbJHtq2D';

$mysql_handle = mysql_connect($dbhost, $dbuser, $dbpass)
      or die("Error connecting to database server");

mysql_select_db($dbname, $mysql_handle)
      or die("Error selecting database: $dbname");

?>
