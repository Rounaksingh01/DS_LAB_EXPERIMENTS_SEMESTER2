#include <stdio.h>

void Bubble_Sort(int A[],int n)
{
	int i,j,temp;
	for (i=1;i<=n-1;i++)
	    for(j=0;j<=n-1-i;j++)
	        if(A[j]>A[j+1])
	        {
	        	temp=A[j];
	        	A[j]=A[j+1];
	        	A[j+1]=temp;
			}
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
	Bubble_Sort(A,n);
	return 0;
}
