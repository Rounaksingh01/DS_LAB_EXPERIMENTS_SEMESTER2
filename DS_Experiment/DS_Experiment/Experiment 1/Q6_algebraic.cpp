#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mult(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
int main(){
	int x,y;
	printf("Enter numbers x and y: ");
	scanf("%d %d",&x,&y);
	printf("The addition of numbers(%d,%d) is %d\n",x,y,add(x,y));
	printf("The subtraction of numbers(%d,%d) is %d\n",x,y,sub(x,y));
	printf("The multplition of numbers(%d,%d) is %d\n",x,y,mult(x,y));
	printf("The divsion of numbers(%d,%d) is %d\n",x,y,div(x,y));
	return 0;
}
