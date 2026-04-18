#include <stdio.h>

void Matrix_Transpose(int M[][10],int m,int n)
{
	int i,j;
	printf("Printing Matrix:\n");
	for(i=0;i<=n-1;i++)
	{
		   for(j=0;j<=m-1;j++)
		   	    printf("%d ",M[j][i]);
			printf("\n");	
	}
}

int main()
{
	int i,j,M[10][10],m,n;
	do{
		printf("Enter Length of row and column of Sqaure Matrix: ");
		scanf("%d %d",&m,&n);	
		if(m==n){
			printf("Enter A square Matrix:\n");
			for(i=0;i<=m-1;i++)
			   for(j=0;j<=n-1;j++)
	               scanf("%d",&M[i][j]);
			Matrix_Transpose(M,m,n);		
		}
		else printf("Please Enter Square Matrix\n");
	}while(m!=n);
	return 0;
}
