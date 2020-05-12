all: bin/tet

bin/tet: build/main.o build/board.o
	gcc build/main.o build/board.o -o bin/tet -lm
build/main.o: src/main.c
	gcc -Wall -Werror -o build/main.o -c src/main.c
build/board.o: src/board.c
	gcc -Wall -Werror -o build/board.o -c src/board.c
clean:
	rm -rf build/ bin/tet 

