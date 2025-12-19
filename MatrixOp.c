#include "MatrixOp.h"
//Basic
int* Add(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    int res[SIZE][SIZE];
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[i][j]=A[i][j]+B[i][j];
        }
    }
}
int* Sub(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    int res[SIZE][SIZE];
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[i][j]=A[i][j]-B[i][j];
        }
    }
} 
int* Dot(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    int res[SIZE][SIZE];
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[i][j]=A[i][j]*B[i][j];
        }
    }
}    
//Linear
int* Mult(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    int res[SIZE][SIZE];
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
int* Trp(int A[SIZE][SIZE])
{
    int res[SIZE][SIZE];
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            res[j][i]=A[i][j];
        }
    }
}
//Advanced
int Det(int A[SIZE][SIZE])
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
int* Adj(int A[SIZE][SIZE])
{

}
//Inverse
int* Inv(int A[SIZE][SIZE])
{

}
//Help
int Det2(int A[2][2]);