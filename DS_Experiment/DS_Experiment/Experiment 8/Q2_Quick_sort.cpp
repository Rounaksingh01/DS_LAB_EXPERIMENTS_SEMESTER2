#include <stdio.h>

void Quick_sort(int A[],int l,int r)
{
	int left=l,right=r,temp;
	int pivot=A[(l+r)/2];
	while(left<right)
	{
		while(A[left]<pivot)
		{
			left++;
		}
		while(A[right]>pivot)
		{
			right--;
		}
		if(left<=right)
		{
			temp=A[left];
			A[left]=A[right];
			A[right]=temp;
			left++;
			right--;
		}
		if(l<right) Quick_sort(A,l,right);
		if(left<r) Quick_sort(A,left,r);
	}
}

int main()
{
	int A[10],i,n;
	printf("Enter the length of Array: ");
	scanf("%d",&n);
	printf("Enter Array:\n");
	for(i=0;i<=n-1;i++) scanf("%d",&A[i]);
	Quick_sort(A,0,n-1);
	printf("Printing Sorted Array\n");
	for(i=0;i<=n-1;i++) printf("%d ",A[i]);
	return 0;
}
