#include <stdio.h>

void Binary_Search(int A[],int n,int x)
{
	int lb=0,ub=n-1,mid;
	mid=(lb+ub)/2;
	while(lb<=ub)
	{
		if(x==A[mid])
		{
			printf("Found");
			return;
		}
		else if(x>A[mid]) lb=mid+1;
		else ub=mid-1;
		mid=(lb+ub)/2;
	}
	if(lb>ub) printf("%d is not in Array...",x);
}

int main()
{
	int i,A[10],n,x;
	printf("Input length Array: ");
	scanf("%d",&n);
	printf("Input Array: ");
	for(i=0;i<n;i++) scanf("%d",&A[i]);
	printf("Input value to search: ");
	scanf("%d",&x);
	Binary_Search(A,n,x);
	return 0;
}
