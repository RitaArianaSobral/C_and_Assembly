compileModules: main.c odd_sum.c
	gcc -c -g -Wall main.c -o main
	gcc -c -g -Wall odd_sum.c -o odd_sum

compileAll: main.o odd_sum.o
	gcc -g -Wall odd_sum main -o mainCompiled

run: mainCompiled
	./mainCompiled
