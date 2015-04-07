-- phpMyAdmin SQL Dump
-- version 2.11.11.3
-- http://www.phpmyadmin.net
--
-- Host: 10.6.175.45
-- Generation Time: Nov 30, 2013 at 08:48 AM
-- Server version: 5.0.96
-- PHP Version: 5.3.4

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `OSUWebDev`
--

-- --------------------------------------------------------

--
-- Table structure for table `todo_items`
--

CREATE TABLE `list` (
  `todo_id` int(3) NOT NULL auto_increment,
  `todo_info` text NOT NULL,
  `user_id` int(3) NOT NULL,
  PRIMARY KEY  (`todo_id`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=11 ;

--
-- Dumping data for table `todo_items`
--

INSERT INTO `todo_items` VALUES(1, 'Go Fishing ', 0);
INSERT INTO `todo_items` VALUES(2, 'Go crabbing', 0);
INSERT INTO `todo_items` VALUES(3, 'go fishing', 0);
INSERT INTO `todo_items` VALUES(10, 'New Item 2', 1);
INSERT INTO `todo_items` VALUES(9, 'New Item 1', 1);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `user_id` int(3) NOT NULL auto_increment,
  `username` varchar(25) NOT NULL,
  `password` varchar(25) NOT NULL,
  PRIMARY KEY  (`user_id`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=9 ;

