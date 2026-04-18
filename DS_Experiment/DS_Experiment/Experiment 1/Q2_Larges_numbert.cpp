#include<stdio.h>
int Largest(int x,int y)
{
	if (x>=y) return x;
	else return y;	
}
int main(){
	int x,y;
	printf("Enter x and y: ");
	scanf("%d %d",&x,&y);
	printf("Largest number is %d",Largest(x,y));
	return 0;
}
