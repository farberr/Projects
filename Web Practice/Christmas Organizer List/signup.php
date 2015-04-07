<?php
	session_start();
	
	require_once("database.php");
	
	if($_SERVER['REQUEST_METHOD'] == "POST") {
		$username = $_POST['username'];
		$password = $_POST['password'];
		
		ini_set('display_errors', 'On');
	
		// Connect to Database		
		$mysqli = new mysqli(HOST, USER, PASSWORD, DATABASE);
		
		
		if ($mysqli -> connect_errno) {
			echo "Failed to connect to MySQL: (" . $mysqli -> connect_errno . ")" . $mysqli -> connect_error;
		}
		
		$stmt = $mysqli->prepare("SELECT 1 FROM user WHERE username = ?");
		
		$stmt->bind_param("s", $_POST['username']);
		
		$result = 0;
		
		$stmt->bind_result($result);
		
		$stmt->execute();
		$stmt->fetch();
		
		$stmt->close();
		
		// inserts username and password into database:  called by ajax in signup.html
		if($result == 0) {
			
			$istmt = $mysqli->prepare("INSERT INTO user (username, password) VALUES (?,?)");
			
			$istmt->bind_param("ss", $_POST['username'], $_POST['password']);
			
			$istmt->execute();
			
			$istmt->close();
			
			echo "true";
		} else {
			echo "false";
		}
		
		$mysqli->close();
		exit();
	}
?>