#include "stdio.h"

void multiply(double A [][], double B [][], double C [][], int n) 
{
	for(int i = 0; i < sizeOf(A); i ++)
	{
		for(int j = 0; j < sizeOf(B); j ++)
		{
			for(int k = 0; k< sizeOf(C) k ++)
			{
				C[i][j] += A[k][j] * B[i][k]
			}
		}
	}
	
	return 2;
}
