#include <stdio.h>

void Triplet(int M[][10],int m,int n,int nz)
{
	int i,j,k=1,T[10][3];
	T[0][0]=m;
	T[0][1]=n;
	T[0][2]=nz;
	for(i=0;i<=m-1;i++)
	   for(j=0;j<=n-1;j++)
	      if(M[i][j]!=0)
	      {
	      	T[k][0]=i;
	      	T[k][1]=j;
	      	T[k][2]=M[i][j];
	      	k++;
		  }
	printf("Printing Triplet\n");
	for(i=0;i<=nz;i++)
	{
		   for(j=0;j<3;j++)
		   	    printf("%d ",T[i][j]);
			printf("\n");	
	}
}

int main()
{
	int i,j,M[10][10],m,n,ch=1,nz;
	do{
		printf("Enter Length of row and column of Matrix: ");
		scanf("%d %d",&m,&n);
		printf("Enter Matrix:\n");
		nz=0;
		ch=1;
		for(i=0;i<=m-1;i++)
			for(j=0;j<=n-1;j++){
				scanf("%d",&M[i][j]);
				if(M[i][j]!=0) nz++;
			}
			if(nz<(m*n)/2){
				printf("It's A Sparse Matrix...\n");
				Triplet(M,m,n,nz);
			}
			else {
				printf("It's Not A Sparse Matrix.Please Enter correct Matrix\n");
				ch=0;
			}
	}while(ch==0);
	return 0;
}
