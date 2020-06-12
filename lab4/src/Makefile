CC=gcc
CFLAGS=-I. -Wall

all: parallel_sum

parallel_sum: parallel_sum.c /projects/os_lab_2019/lab3/src/utils.c
	$(CC) parallel_sum.c /projects/os_lab_2019/lab3/src/utils.c -lpthread -o parallel_sum_by_threads  $(CFLAGS)