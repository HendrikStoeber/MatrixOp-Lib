#include "MatrixOp.h"
#include<stdio.h>
//Basic
void Add(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
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
void Sub(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
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
void Dot(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
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
void Mult(int A[SIZE][SIZE], int B[SIZE][SIZE], int res[SIZE][SIZE])
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
void Trp(int A[SIZE][SIZE], int res[SIZE][SIZE])
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
    int adj[SIZE][SIZE];
    adj[0][0] =  (A[1][1]*A[2][2] - A[1][2]*A[2][1]);
    adj[0][1] = -(A[0][1]*A[2][2] - A[0][2]*A[2][1]);
    adj[0][2] =  (A[0][1]*A[1][2] - A[0][2]*A[1][1]);

    adj[1][0] = -(A[1][0]*A[2][2] - A[1][2]*A[2][0]);
    adj[1][1] =  (A[0][0]*A[2][2] - A[0][2]*A[2][0]);
    adj[1][2] = -(A[0][0]*A[1][2] - A[0][2]*A[1][0]);

    adj[2][0] =  (A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    adj[2][1] = -(A[0][0]*A[2][1] - A[0][1]*A[2][0]);
    adj[2][2] =  (A[0][0]*A[1][1] - A[0][1]*A[1][0]);
}
//Inverse
void Inv(int A[SIZE][SIZE], float res[SIZE][SIZE])
{
    if(Det3x3(A)==0)
    {
        printf("Det is 0, Matrix cant be inverted.")
    }
    else{
        
        return 1/Det3x3(A)*Adj(A);
    }

}
