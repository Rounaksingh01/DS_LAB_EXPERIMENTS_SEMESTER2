#include<stdio.h>
int GCD(int x,int y)
{
	while(x!=y){
		if(x>y) x=x-y;
		else y=y-x;
	}
	return x;
}
int main(){
	int x,y;
	printf("Enter x and y: ");
	scanf("%d %d",&x,&y);
	printf("GCD %d",GCD(x,y));
	return 0;
}
