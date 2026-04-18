#include<stdio.h>
int Square(int x)
{
	return x*x;	
}
int main(){
	int x;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Square number is %d",Square(x));
	return 0;
}
