.PHONY: all clean

all: bin/deposit-calc

bin/deposit-calc: build/main.o build/deposit.o src/deposit.h
	gcc -Wall -Werror build/main.o build/deposit.o -o bin/deposit-calc
build/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/main.o
build/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

clean:
	rm -f build/* bin/deposit-calc
