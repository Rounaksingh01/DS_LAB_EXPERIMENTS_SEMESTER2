#include <stdio.h>

void Merge_sorted(int A[],int n1,int B[],int n2)
{
	int i,j,k,C[n1+n2];
	for(i=0;i<n1+n2;i++){
		for(j=0;j<n1;j++){
			for(k=0;k<n2;k++){
				if(A[j]>B[k]) C[i]=B[k];
				else C[i]=A[j];
			}
		}
	}
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
	Merge_sorted(A,n1,B,n2);
	return 0;
}
