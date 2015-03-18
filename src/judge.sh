#!/bin/bash
read tim;
read testsCount;
for((x=1; "$x" <= "$testsCount" ;x++))
do
	sleep 1;
	echo -n "Test #$x: ";
	timeout $tim ./c > ./input.txt 2>/dev/null;
	k=$?;
	if [ $k -eq 124 ]
	then
		echo "Test maker code timed out";
		break;
	fi;
	if [ $k -eq 136 ]
	then
		echo "Test maker code has runtime-error"
		break;
	fi;
	if [ $k -ne 0 ]
	then
		echo "Test maker code has unknown error";
		break;
	fi;
	
	timeout $tim ./a < ./input.txt > ./output.txt 2>/dev/null;
	k=$?;
	if [ $k -eq 124 ]
	then
		echo "Your code timed out";
		break;
	fi;
	if [ $k -eq 136 ]
	then
		echo "Your code has runtime-error";
		break;
	fi;
	if [ $k -ne 0 ]
	then
		echo "Your code has unknown error";
		break;
	fi;

	timeout $tim ./b < ./input.txt > ./answer.txt;
	k=$?;
	if [ $k -eq 124 ]
	then
		echo "Correct code timed out";
		break;
	fi;
	if [ $k -eq 136 ]
	then
		echo "Correct code has runtime-error";
		break;
	fi;
	if [ $k -ne 0 ]
	then
		echo "Correct code has unknown error";
		break;
	fi;

	if (diff -b ./output.txt ./answer.txt);
	then
		echo "OK";
	else
		echo "WRONG";
		break;
	fi;
done;
