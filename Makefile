.PHONY: all test clean

all: bin/deposit-calc

bin/deposit-calc: build/src/main.o build/src/deposit.o src/deposit.h
	gcc -Wall -Werror build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/src/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

test: bin/deposit-test

bin/deposit-test: build/test/main.o build/test/deposit_test.o build/src/deposit.o build/test/validation_test.o
	gcc -I thirdparty -I src -Wall -Werror build/test/deposit_test.o build/test/main.o build/src/deposit.o build/test/validation_test.o -o bin/deposit-test
	cd bin && ./deposit-test

build/test/main.o: test/main.c
	gcc -I thirdparty -I src -Wall -Werror -c test/main.c -o build/test/main.o

build/test/deposit_test.o: test/deposit_test.c
	gcc -I thirdparty -I src -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o

build/test/validation_test.o: test/validation_test.c
	gcc -I thirdparty -I src -Wall -Werror -c test/validation_test.c -o build/test/validation_test.o

clean:
	rm -f build/src/* build/test/* bin/*
