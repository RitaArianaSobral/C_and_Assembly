mainCompiled.o: main.o asm.o
	gcc -Wall -g main.o asm.o -o mainCompiled.o

main.o: main.c asm.h
	gcc -Wall -g -c main.c -o main.o

asm.o: asm.s
	gcc -Wall -g -c asm.s -o asm.o

run: mainCompiled.o
	./mainCompiled.o

clean:
	rm *.o main
