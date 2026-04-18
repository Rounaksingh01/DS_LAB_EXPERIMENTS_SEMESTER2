#include<stdio.h>
void Fibonnaci(int n)
{
	int fn,sn,tn;
	fn=0;
	sn=1;
	tn=fn;
	while(fn<n){
		printf("%d\n",fn);
		tn=fn+sn;
		fn=sn;
		sn=tn;
	}
}
int main(){
	int n,fn,sn,tn;
	printf("Enter number: ");
	scanf("%d",&n);
	Fibonnaci(n);
}
