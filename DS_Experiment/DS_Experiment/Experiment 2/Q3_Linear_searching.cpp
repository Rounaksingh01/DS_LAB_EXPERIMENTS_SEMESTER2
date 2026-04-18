#include <stdio.h>
#include <process.h>//include <stdlib.h>

void Linear_Search(int A[],int x,int n){
	int i;
	for(i=0;i<=n-1;i++){
		if(x==A[i]){
			printf("%d is found in %dloc",x,i);
			exit(0);
		}
	}
	if(x!=A[i]) printf("%d is not found",x);
}

int main(){
	int n,A[10],i,x;
	printf("Input Lenth: ");
	scanf("%d",&n);
	printf("Input Array:\n");
	for(i=0;i<=n-1;i++) scanf("%d",&A[i]);
	printf("Input the value to be searched: ");
	scanf("%d",&x);
	Linear_Search(A,x,n);
	return 0;
}
