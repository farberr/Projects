<?php
	session_start();
	
	require_once("database.php");
		
	if(!isset($_SESSION['uid'])) {
		header("Location: login.php");
		exit();
	}
	
	ini_set('display_errors', 'On');
	
	// Connect to Database
	$mysqli = new mysqli(HOST, USER, PASSWORD, DATABASE);
	
	$delete_stmt = $mysqli->prepare("DELETE FROM list WHERE todo_id = ?");
	$delete_stmt->bind_param("i", $_GET['id']);
	$delete_stmt->execute();
	$delete_stmt->close();
	$mysqli->close();
	
	header("Location: todo.html");
	exit();
?>