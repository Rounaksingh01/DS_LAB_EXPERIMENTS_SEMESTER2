#include <stdio.h>

void Selection_Sort(int A[],int n)
{
	int i,j,temp;
	for (i=0;i<=n-2;i++)
	    for(j=i+1;j<=n-1;j++)
	        if(A[i]>A[j])
	        {
	        	temp=A[j];
	        	A[j]=A[i];
	        	A[i]=temp;
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
	Selection_Sort(A,n);
	return 0;
}
