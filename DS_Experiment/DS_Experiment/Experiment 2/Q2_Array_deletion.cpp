#include <stdio.h>

void Array_Deletion(int A[],int loc,int n){
	int i;
	printf("%d is the deleted Element",A[loc]);
	if(loc==n-1) n--;
	else
	{
		for(i=loc;i<=n-2;i++) A[i]=A[i+1];
		n--;
	}
	printf("Printing Array\n");
	for(i=0;i<=n-1;i++) printf("%d\n",A[i]);
}

int main(){
	int n,A[10],i,loc;
	printf("Input Lenth: ");
	scanf("%d",&n);
	printf("Input Array:\n");
	for(i=0;i<=n-1;i++) scanf("%d",&A[i]);
	printf("Input loc: ");
	scanf("%d",&loc);
	Array_Deletion(A,loc,n);
	return 0;
}
