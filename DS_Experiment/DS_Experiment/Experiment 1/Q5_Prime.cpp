#include <stdio.h>
int Prime(int n)
{
	int isprime=1,i;
    if(n<=1) isprime=0;
    for (i=2;i<=n/2;i++){
        if (n%i==0)
            isprime=0;
            break;
    }
    return isprime;
}

int main()
{
    int i,n,isprime;
    printf("Enter number: ");
    scanf("%d",&n);
    isprime=Prime(n);
    if(isprime==1)
            printf("Prime number");
    else 
        printf("Not A Prime number");
    return 0;
}
