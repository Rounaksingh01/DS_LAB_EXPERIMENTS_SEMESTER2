#include <stdio.h>
void Strong(int num)
{
	int i,sum=0,digit,original;
	original=num;
	while(num>0){
		digit=num%10;
		int fact=1;
		for(i=1;i<=digit;i++){
			fact*=i;
		}
		sum+=fact;
		num=num/10;
	}
	if(original==sum) printf("Strong number");
	else printf("Not a Strong");
}
int main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	Strong(num);
	return 0;
}
