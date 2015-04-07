<?php 
	session_start();
	require_once("connection.php");
			
	if ($_SERVER['REQUEST_METHOD'] == "POST") {
		
		// 1. Connect to Database
		$mysqli = new mysqli(HOST, USER, PASSWORD, DATABASE);
	
		if ($mysqli -> connect_errno) {
			echo "Failed to connect to MySQL: (" . $mysqli -> connect_errno . ")" . $mysqli -> connect_error;
		}
		
		if (isset($_POST['username'], $_POST['password'])) {
			$username = $_POST['username'];
			$password = $_POST['password'];
	
			$cu_stmt = $mysqli -> prepare("SELECT id, password FROM apprentice WHERE username = ?");
	
			$result = "";
			$id = "";
	
			$cu_stmt -> bind_param("s", $username);
			$cu_stmt -> bind_result($id, $result);
	
			$cu_stmt -> execute();
	
			$cu_stmt -> fetch();
	
			$cu_stmt -> close();
	
			if ($password == $result) {
				$_SESSION['uid'] = $id;
				
				echo "true";
				header("Location: landing_ap.html");
			} else {
				echo "false";
				header("Location: index_ap.html");
			}
		}
		
		$mysqli -> close();
		exit();
	}
?>