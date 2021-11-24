#include <stdio.h>
#define MAX 40
int main ()
{
	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	int row, col, i, sum;
	printf ("Enter the elements in matrix A of size 3*3: \n");
	for (row=0;row<3; row++)
	{
		for (col=0; col<3; col++)
		{
			scanf ("%d",&A [row][col]);
		}
	}
	printf (" Enter the elements in matrix B of size 3*1: \n");
	for (row=0; row<3; row++)
	{
		for (col=0; col<1; col++)
		{
			scanf ("%d", &B[row][col]);
		}
	}
	for (row=0; row<3; row++)
	{
		for (col=0; col<3; col++)
		{
			sum=0;
			for (i=0; i<3; i++)
			{
				sum+=A[row][i]*B[i][col];
			}
			C[row][col]=sum;
		}
	}
	printf ("\n product of matrix A*B= \n");
	for (row=0;row<3;row++)
	{
		for (col=0; col<3; col++)
		{
			printf ("%d", C [row][col]);
			{
				sum=0;
				for (i=0; i<3; i++)
				{
					sum+= A[row][i]*B[i][col];
				}
				C[row][col]=sum;
			}
		}
		printf ("\n product of matrix A*B=\n");
		for (row=0; row<3; row++)
		{
			printf ("%d", C[row][col]);
		}
		printf ("\n");
	}
	return 0;
}
