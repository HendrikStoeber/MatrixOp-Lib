#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3
//Basic
int* Add(int *A, int *B, int size);
int* Sub(int *A, int *B, int size);
int* Dot(int *A, int *B, int size);
//Linear
int* Mult(int *A, int *B, int size);
int* Trp(int *A, int *B, int size);
//Advanced
int* Det(int *A, int *B, int size);
int* Adj(int *A, int *B, int size);
//Inverse
int* Inv(int *A, int *B, int size);
#endif