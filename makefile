main : main.c ascii.o ascii.h einmaleins.o einmaleins.h
	gcc -o main einmaleins.o ascii.o main.c

ascii.o : ascii.c
	gcc -c ascii.c

einmaleins.o : einmaleins.c
	gcc -c einmaleins.c