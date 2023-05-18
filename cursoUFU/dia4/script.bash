!/bin/sh

clear 
rm -f $1.out

if (g++ -o $1 $1.cpp -Wall -pedantic -lm -g) then
	echo "### COMPILOU ###"
	if !(./$1 < $1.in > $1.out ) then
		echo "### RUNTIME ERROR ###" >> $1.OUT
	fi
	less $1.out
fi
