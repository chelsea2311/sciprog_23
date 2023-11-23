Practical_6 folder contains 1 program of C programming.
1. Matrix multiplication

We will use GCC complier to compile and execute the code.
The code is complied and executed using MINGW compiler on a windows machine
For initial steps:

gcc matmult.c -o matmult
./matmult

For Final step:
 gcc -c main.c
 gcc -c matmult_1.c
 gcc -o  matrix_multiplication main.o matmult_1.o
 ./matrix_multiplication

Note:
 We called matmult.h module inside matmult_1.c file
