#include <stdio.h>
#define maxQ 5

int Front=-1,Rear=-1,LQ[maxQ];

void LQInsertion(int X)
{
	if (Rear==maxQ-1)
	{
		printf("List overflow");
		return;
	}
	if (Front==-1 && Rear==-1)
	{
		Front=0;
		Rear=0;
	}
	else Rear++;
	LQ[Rear]=X;
	printf("Successfully Inserted");
}

void LQDeletion()
{
	if (Front==-1 && Rear==-1)
	{
		printf("List underflow");
		return;
	}
	printf("Deleted Element %d",LQ[Front]);
	if (Front==Rear)
	{
		Front=-1;
		Rear=-1;
	}
	else Front++;
}

void Display()
{
	int i;
	printf("Printing Linear Queue\n");
	for(i=Front;i<=Rear;i++) printf("%d ",LQ[i]);
}

int main()
{
	int ch,x,i;	
	printf("\n************Menu************\n");
	printf("0.Exit\n");
	printf("1.Insertion\n");
	printf("2.Deletion\n");
	printf("3.Display");
	do
	{
	
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter Element:");
			scanf("%d",&x);
			LQInsertion(x);
		}
		else if(ch==2)
		{
			LQDeletion();
		}
		else if(ch==3)
		{
			Display();
		}
		else if(ch!=0)
		{
			printf("Please Enter correct choice");
		}
	}while(ch!=0);
	printf("Thank you");
	return 0;
}
