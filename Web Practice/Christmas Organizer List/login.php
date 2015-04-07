<?php 
	session_start();
	require_once("database.php");
			
	if ($_SERVER['REQUEST_METHOD'] == "POST") {
		
		//Connect to Database
		$mysqli = new mysqli(HOST, USER, PASSWORD, DATABASE);
	
		if ($mysqli -> connect_errno) {
			echo "We can't connect to the database!: (" . $mysqli -> connect_errno . ")" . $mysqli -> connect_error;
		}
		
		//query database for username
		if (isset($_POST['username'], $_POST['password']) 
			&& $_POST['username'] !=='' 
			&& $_POST['password'] !=='') {
			$username = $_POST['username'];
			$password = $_POST['password'];

			$cu_stmt = $mysqli -> prepare("SELECT user_id, password FROM user WHERE username = ?") or die($mysqli->error);
				
			$result = "";
			$id = "";
	
			$cu_stmt -> bind_param("s", $username);
			$cu_stmt -> bind_result($id, $result);
			$cu_stmt -> execute();
			$cu_stmt -> fetch();
			$cu_stmt -> close();
	
			//compare and set session ID
			if ($password == $result) {
				$_SESSION['uid'] = $id;
				
				echo "true";
			} else {
				echo "false";
			}
		}
		
		$mysqli -> close();
		exit();
	}
?>