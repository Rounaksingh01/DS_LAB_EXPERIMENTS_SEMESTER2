#include <stdio.h>

void Print_Matrix(int M[][10],int m,int n)
{
	int i,j;
	printf("Printing Matrix:\n");
	for(i=0;i<=m-1;i++)
	{
		   for(j=0;j<=n-1;j++)
		   	    printf("%d ",M[i][j]);
			printf("\n");	
	}
}

int main()
{
	int i,j,M[10][10],m,n;
	printf("Enter Length of row and column of Matrix: ");
	scanf("%d %d",&m,&n);
	printf("Input Matrix:\n");
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
		    scanf("%d",&M[i][j]);
	Print_Matrix(M,m,n);
	return 0;
}
