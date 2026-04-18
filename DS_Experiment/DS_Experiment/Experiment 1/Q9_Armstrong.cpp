#include <stdio.h>
void Armstrong(int num)
{
	int i,sum=0,digit,temp,original,count=0;
	temp = num;
	original=num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
	while(num>0){
		digit=num%10;
		int f_digit=1;
		for(i=1;i<=count;i++){
			f_digit*=digit;
		}
		sum+=f_digit;
		num=num/10;
	}
	if(original==sum) printf("Armstrong number");
	else printf("Not a Armstrong");
}
int main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	Armstrong(num);
	return 0;
}
