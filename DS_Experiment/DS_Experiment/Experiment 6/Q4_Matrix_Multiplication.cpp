#include <stdio.h>

void Matrix_Multiplication(int M1[][10],int m1,int n1,int M2[][10],int m2,int n2)
{
	int i,j,k,C[10][10];
	for(i=0;i<=m1-1;i++)
	   for(j=0;j<=n2-1;j++)
	   {
	      C[i][j]=0;
		  for(k=0;k<=n1-1;k++)
	         C[i][j]+=M1[i][k]*M2[k][j];
		}
	printf("Printing Multiplication Matrix:\n");
	for(i=0;i<=m1-1;i++)
	{
		   for(j=0;j<=n2-1;j++)
				printf("%d ",C[i][j]);
			printf("\n");	
	}
}

int main()
{
	int i,j,M1[10][10],m1,n1,m2,n2,M2[10][10];
	do{
		printf("Enter Length of row and column of Sqaure Matrix 1: ");
		scanf("%d %d",&m1,&n1);
		printf("Enter Length of row and column of Sqaure Matrix 2: ");
		scanf("%d %d",&m2,&n2);	
		if(n1==m2){
			printf("Enter A square Matrix 1:\n");
			for(i=0;i<=m1-1;i++)
			   for(j=0;j<=n1-1;j++)
	               scanf("%d",&M1[i][j]);
			printf("Enter A square Matrix 2:\n");
			for(i=0;i<=m2-1;i++)
			   for(j=0;j<=n2-1;j++)
	               scanf("%d",&M2[i][j]);
			Matrix_Multiplication(M1,m1,n1,M2,m2,n2);		
		}
		else printf("Multiplication can't possible. Please Enter correct matrixes\n");
	}while(n1!=m2);
	return 0;
}
