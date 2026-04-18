#include <stdio.h>

void Merge_BA(int A[],int n1,int B[],int n2)
{
	int i,j,n,C[n1+n2];
	for(i=0;i<=n2-1;i++) C[i]=B[i];
	for(j=0,i=n2;j<=n1-1;j++,i++) C[i]=A[j];
	printf("Printing Merge Array C\n");
	for (i=0;i<n1+n2;i++) printf("%d\n",C[i]);
}

int main(){
	int A[10],n1,B[10],n2,i;
	printf("Input length of array A: ");
	scanf("%d",&n1);
	printf("Input length of array B: ");
	scanf("%d",&n2);
	printf("Input Array A:\n");
	for(i=0;i<n1;i++) scanf("%d",&A[i]);
	printf("Input Array B:\n");
	for(i=0;i<n2;i++) scanf("%d",&B[i]);
	Merge_BA(A,n1,B,n2);
	return 0;
}
