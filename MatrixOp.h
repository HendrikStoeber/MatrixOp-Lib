#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3
//Basic
int* Add(int A[SIZE][SIZE], int B[SIZE][SIZE]);
int* Sub(int A[SIZE][SIZE], int B[SIZE][SIZE]);
int* Dot(int A[SIZE][SIZE], int B[SIZE][SIZE]);
//Linear
int* Mult(int A[SIZE][SIZE], int B[SIZE][SIZE]);
int* Trp(int A[SIZE][SIZE]);
//Advanced
int Det(int A[SIZE][SIZE]);
int* Adj(int A[SIZE][SIZE]);
//Inverse
int* Inv(int A[SIZE][SIZE]);
#endif