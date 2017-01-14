all: wc map

wc: wc.o
	gcc wc.o  -o wc	
wc.o:
	gcc -g -c -Wall  wc.c

map: map.o
	gcc map.o -o map

map.o:
	gcc -g -c -Wall map.c
clean:
	rm *o

