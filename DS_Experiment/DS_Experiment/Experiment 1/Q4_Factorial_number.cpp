#include<stdio.h>
int Factorial(int x)
{
	if(x==1) return 1;
	return x*Factorial(x-1);	
}
int main(){
	int x;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Factorial of number is %d",Factorial(x));
	return 0;
}
