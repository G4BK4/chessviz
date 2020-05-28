chessviz: bin/chessviz

chessviz-test: bin/chessviz-test

bin/chessviz: build/src/main.o build/src/board.o build/src/board_print_plain.o
	gcc build/src/main.o build/src/board.o build/src/board_print_plain.o -o bin/chessviz -lm

bin/chessviz-test: build/test/main.o build/src/board.o build/src/board_print_plain.o 
	gcc build/test/main.o build/src/board.o build/src/board_print_plain.o -o bin/chessviz-test -lm

build/test/main.o: test/main.c
	gcc -I thirdparty -I srcgit  -o build/test/main.o -c test/main.c

build/src/main.o: src/main.c
	gcc -Wall -Werror -o build/src/main.o -c src/main.c

build/src/board.o: src/board.c
	gcc -Wall -Werror -o build/src/board.o -c src/board.c

build/src/board_print_plain.o: src/board_print_plain.c
	gcc -Wall -Werror -o build/src/board_print_plain.o -c src/board_print_plain.c

clean:
	rm -rf build/src/* build/test/* bin/* moves.txt

.PHONY: all clean