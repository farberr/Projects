<?php
	session_start();
	
	require_once("database.php");
	
	if(!isset($_SESSION['uid'])) {
		header("Location: login.php");
		echo "false";
		exit();
	}
	
	// gets list of items from database
	if($_SERVER['REQUEST_METHOD'] == "GET") {
		$mysqli = new mysqli(HOST, USER, PASSWORD, DATABASE);
		
		$stmt = $mysqli->prepare("SELECT todo_id, todo_info FROM list WHERE user_id = ?") or die($mysqli->error);
		
		$stmt->bind_param("i", $_SESSION['uid']);
		$stmt->bind_result($todo_id, $todo_info);
		
		$todoArray = Array();
		
		$stmt->execute();
		
		while($stmt->fetch()) {
			$todoArray[$todo_id] = $todo_info;
		}
		
		$mysqli->close();
		
		echo json_encode($todoArray);
	}
	
	// inserts item into database:  called by ajax in todo.html
	if($_SERVER['REQUEST_METHOD'] == "POST") {
		$mysqli = new mysqli(HOST, USER, PASSWORD, DATABASE);
		$stmt = $mysqli->prepare("INSERT INTO list (todo_info, user_id) VALUES (?, ?)") or die("false");
		$stmt->bind_param("si", $_POST['item'], $_SESSION['uid']);
		$stmt->execute() or die("false");
		$mysqli->close();
	}
?>