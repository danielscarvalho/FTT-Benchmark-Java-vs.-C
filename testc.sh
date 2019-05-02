gcc -O2 -c test1.c
gcc -O2 -c test.c
gcc test.o test1.o
time ./a.out

