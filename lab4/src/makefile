CC=gcc
CFLAGS=-I.


all:  process_memory parallel_min_max


process_memory: process_memory.o
	$(CC) process_memory.o -o process_memory $(CFLAGS)

process_memory.o: process_memory.c
	$(CC) -c process_memory.c $(CFLAGS)

parallel_min_max : utils.o find_min_max.o /projects/os_lab_2019/lab3/src/utils.h /projects/os_lab_2019/lab3/src/find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o /projects/os_lab_2019/lab3/src/parallel_upgraded.c $(CFLAGS)

utils.o : /projects/os_lab_2019/lab3/src/utils.h
	$(CC) -o utils.o -c /projects/os_lab_2019/lab3/src/utils.c $(CFLAGS)

find_min_max.o : /projects/os_lab_2019/lab3/src/utils.h /projects/os_lab_2019/lab3/src/find_min_max.h
	$(CC) -o find_min_max.o -c /projects/os_lab_2019/lab3/src/find_min_max.c $(CFLAGS)

clean : 
	rm -rf *.o process_memory utils.o find_min_max.o