a.out: main.o polinomio.o
	gcc main.o polinomio.o
main.o: main.c
	gcc -c main.c
polinomio.o: polinomio.c
	gcc -c polinomio.c
run: a.out
	./a.out
clear:
	rm a.out main.o polinomio.o 
	

