#!/bin/bash
read tim;
read testsCount;
for((x=1; "$x" <= "$testsCount" ;x++))
do
	sleep 1;
	echo -n "Test #$x: ";
	timeout $tim ./c > ./input.txt;
	timeout $tim ./a < ./input.txt > ./output.txt; 
	timeout $tim ./b < ./input.txt > ./answer.txt;
	if (diff -b ./output.txt ./answer.txt);
	then
		echo "OK";
	else
		echo "WRONG";
		break;
	fi;
done;

