	Judge Installation Guide
		2015/03/18
	Copyright (c) Armin Vakil

Before everything thank you for choosing my project.

1. Release Note
	This software package release is version 1.0

	This release supports x86 32bit and 64bit CPU families in Linux.

2. File and folder descriptions
	
	src\	Codes are in that folder
		judge.cpp 	Implementation of the Judge class methods
		judge.h		Definition of the Judge class instances and methods
		Judge.pro	Qt Settings for compiling
		judge.sh	Shell file that include shell commands for judging
		main.cpp	Call the methods to run the graphical environment
		mainwindow.cpp 	Implementation of the Mainwindow class methods
		mainwindow.h	Definition of the Mainwindow class instances and methods
		mainwindow.ui	Graphical user interface of the project
		Makefile	Compile settings of the project

	Readme.txt	Explanation of the project
	LICENSE		License of the project
	README.md	Little explanation of the project


3. Package Installation for Linux
	a. Install packages need to run the project
	 My project is based on C++ & Qt, so you should install GNU C++ Compiler & Qt Web kit.
	 For Install these programs you can run these commands in terminal:
		- sudo apt-get install build-essential
		- sudo apt-get install libqtwebkit-dev

	b. Compile the project
	 To compile the project goto the src folder in the project and run "make" command (without quotes) in terminal.

	c. Run the project
	 If everything goes right you can run the project with running Judge.out file.

Thanks for choosing us
