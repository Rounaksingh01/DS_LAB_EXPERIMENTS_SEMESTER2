#include <stdio.h>

void Array_Insertion(int A[],int loc,int x,int n){
	int i;
	if(loc==n) A[n]=x;
	else
	{
		for(i=n;i>=loc+1;i--) A[i]=A[i-1];
		A[loc]=x;
	}
	n++;
	printf("Printing Array\n");
	for(i=0;i<=n-1;i++) printf("%d\n",A[i]);
}

int main(){
	int n,A[10],i,loc,x;
	printf("Input Lenth: ");
	scanf("%d",&n);
	printf("Input Array:\n");
	for(i=0;i<=n-1;i++) scanf("%d",&A[i]);
	printf("Input x and loc ");
	scanf("%d %d",&x,&loc);
	Array_Insertion(A,loc,x,n);
	return 0;
}
