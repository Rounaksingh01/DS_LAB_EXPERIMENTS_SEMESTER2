#include <stdio.h>
#define max 10

int stack[max],top=-1;

void push(int x)
{
	if(top==max-1) 
	{
		printf("Stack Overflow");
		return;
	}
	stack[++top]=x;
	printf("Successfully Instered");
}

int pop()
{
	if(top==-1) return -1;
	return stack[top--];
}

void display()
{
	for (int i=top;i>=0;i--) printf("%d ",stack[i]);
	printf("\n");
}

int main()
{
	int ch,x,p,i;
	do
	{
		printf("\n************Menu************\n");
		printf("0.Exit\n");
		printf("1.POP\n");
		printf("2.PUSH\n");
		printf("3.Display\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			p=pop();
			if(p==-1) printf("Stack Underflow");
			else printf("Successfully Delete TOP element");
		}
		else if(ch==2)
		{
			printf("Enter value to insert: ");
			scanf("%d",&x);
			push(x);
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch!=0)
		{
			printf("Please Enter correct choice");
		}
	}while(ch!=0);
	printf("Thank you");
	return 0;
}
