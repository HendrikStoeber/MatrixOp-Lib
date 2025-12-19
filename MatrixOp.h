#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3
//Basic
void Add(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE]);
void Sub(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE]);
void Dot(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE]);
//Linear
void Mult(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE]);
void Trp(int A[SIZE][SIZE], int res[SIZE][SIZE]);
//Advanced
int Det3x3(int A[SIZE][SIZE]);
int Det2x2(int A[2][2]);
void Adj(int A[SIZE][SIZE], int res[SIZE][SIZE]);
//Inverse
void Inv(int A[SIZE][SIZE], float res[SIZE][SIZE]);
#endif