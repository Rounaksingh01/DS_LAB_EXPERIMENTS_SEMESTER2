#include <stdio.h>

void Traverse_Array(int A[],int n)
{
	int i;
	printf("Printing Array...\n");
	for(i=0;i<n;i++) printf("%d\n",A[i]);
}

int main()
{
	int i,A[10],n;
	printf("Input length Array: ");
	scanf("%d",&n);
	printf("Input Array: ");
	for(i=0;i<n;i++) scanf("%d",&A[i]);
	Traverse_Array(A,n);
	return 0;
}
