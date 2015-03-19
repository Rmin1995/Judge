	Judge Installation Guide
		2015/03/18
	Copyright &copy Armin Vakil

Before anything let me thank you for choosing my project.

1. Release Note
	This released beta version of this package is 1.0

	This release supports x86 32bit and 64bit CPU families in Linux.

2. Files and folders descriptions
	
	src\	Codes are in this folder
		judge.cpp 	Implementation of the Judge class methods
		judge.h		Definition of the Judge class instances and methods
		Judge.pro	Qt Settings for compiling
		judge.sh	Shell file that include shell commands for judging
		main.cpp	Call the methods to run the graphical environment
		mainwindow.cpp 	Implementation of the Mainwindow class methods
		mainwindow.h	Definition of the Mainwindow class instances and methods
		mainwindow.ui	Graphical user interface of the project
		Makefile	Compile settings of the project

	Readme.txt	The explanation of the project
	LICENSE		License of the project
	README.md	A brief explanation of the project


3. Package Installation for Linux
	a. The necessary packages to be installed prior to this are as follows:
	 My project is based on C++ & Qt, so you should install GNU C++ Compiler & Qt Web kit.
	 For installing these programs you can run these commands in terminal:
		- sudo apt-get install build-essential
		- sudo apt-get install libqtwebkit-dev

	b. Compile the project
	 To compile the project, go to the src folder in the project and run "make" command (without quotes) in terminal.

	c. Run the project
	 If everything goes right you can run the project with running Judge.out file.

Thanks for choosing us
