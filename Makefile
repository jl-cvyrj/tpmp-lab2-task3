# Makefile для праекта STUDENT

bin/main: obj/main.o obj/student.o
	gcc -o bin/main obj/main.o obj/student.o

obj/main.o: src/main.c include/student.h
	gcc -c src/main.c -o obj/main.o

obj/student.o: src/student/student.c include/student.h
	gcc -c src/student/student.c -o obj/student.o

clean:
	rm -f obj/* bin/*
