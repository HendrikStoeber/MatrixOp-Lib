#include "MatrixOp.h"
#include <stdio.h>
//Basic
void Add(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[i][j]=A[i][j]+B[i][j];
        }
    }
}
void Sub(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[i][j]=A[i][j]-B[i][j];
        }
    }
} 
void Dot(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[i][j]=A[i][j]*B[i][j];
        }
    }
}    
//Linear
void Mult(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            int sum=0;
            for(int k=0;k<SIZE;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            res[i][j]=sum;
        }
    }
}
void Trp(int A[SIZE][SIZE], int res[SIZE][SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[j][i]=A[i][j];
        }
    }
}
//Advanced
int Det3x3(int A[SIZE][SIZE])
{
    return
    A[0][0]*A[1][1]*A[2][2] +
    A[0][1]*A[1][2]*A[2][0] +
    A[0][2]*A[1][0]*A[2][1] -

    A[0][2]*A[1][1]*A[2][0] -
    A[0][0]*A[1][2]*A[2][1] -
    A[0][1]*A[1][0]*A[2][2]
    ;
}
int Det2x2(int A[2][2])
{
    return A[0][0]*A[1][1] - A[0][1]*A[1][0];
}
void Adj(int A[SIZE][SIZE], int res[SIZE][SIZE])
{
    res[0][0] =  (A[1][1]*A[2][2] - A[1][2]*A[2][1]);
    res[0][1] = -(A[0][1]*A[2][2] - A[0][2]*A[2][1]);
    res[0][2] =  (A[0][1]*A[1][2] - A[0][2]*A[1][1]);

    res[1][0] = -(A[1][0]*A[2][2] - A[1][2]*A[2][0]);
    res[1][1] =  (A[0][0]*A[2][2] - A[0][2]*A[2][0]);
    res[1][2] = -(A[0][0]*A[1][2] - A[0][2]*A[1][0]);

    res[2][0] =  (A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    res[2][1] = -(A[0][0]*A[2][1] - A[0][1]*A[2][0]);
    res[2][2] =  (A[0][0]*A[1][1] - A[0][1]*A[1][0]);
}
//Inverse
void Inv(int A[SIZE][SIZE], float res[SIZE][SIZE])
{
    int det = Det3x3(A);
    if(det==0)
    {
        printf("Det is 0, Matrix cant be inverted.");
        return;
    }
    int adj[SIZE][SIZE];
    Adj(A,adj);

    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[i][j] = (float)adj[i][j] / det;  
        }
    }
}
