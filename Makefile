all: intarray curlyarray valentine 

intarray: intarray.c
	gcc intarray.c -o intarray

curlyarray: curlyarray.c
	gcc curlyarray.c -o curlyarray

chararray: chararray.c
	gcc chararray.c -o chararray

valentine: valentine.c
	gcc valentine.c -o valentine

average: average.c
	gcc average.c -o average
