dfault: fakultaet

fakultat.o: fakultaet.c
	gcc -c fakultaet.c -o fakultaet.o

fakultaet: fakultaet.o
	gcc fakultaet.o -o fakultaet 

clan:
	-rm -f fakultaet.o
	-rm -f fakultaet
