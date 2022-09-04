CC=gcc -g

bin/app: src/*.c
	$(CC) $^ -o $@
