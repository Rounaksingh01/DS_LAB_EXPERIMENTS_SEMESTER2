#include <stdio.h>

void Insertion_sort(int A[],int n)
{
	int i,j,temp;
	for(i=0;i<=n-1;i++)
	{
		temp=A[i];
		j=i-1;
		while(j>=0 && temp<A[j])
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
	printf("Printing Sorted Array\n");
	for(i=0;i<=n-1;i++) printf("%d ",A[i]);
}

int main()
{
	int A[10],i,n;
	printf("Enter the length of Array: ");
	scanf("%d",&n);
	printf("Enter Array:\n");
	for(i=0;i<=n-1;i++) scanf("%d",&A[i]);
	Insertion_sort(A,n);
	return 0;
}
