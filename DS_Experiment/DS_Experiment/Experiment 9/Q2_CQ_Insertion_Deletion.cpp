#include <stdio.h>
#define maxQ 5

int Front=-1,Rear=-1,CQ[maxQ];

void CQInsertion(int X)
{
	if (((Rear + 1) % maxQ == Front) || (Front==0 && Rear==maxQ-1))
	{
		printf("List overflow");
		return;
	}
	if (Front==-1 || Rear==-1)
	{
		Front=0;
		Rear=0;
	}
	else Rear=(Rear+1)%maxQ;
	CQ[Rear]=X;
	printf("Successfully Inserted");
}

void CQDeletion()
{
	if (Front==-1 && Rear==-1)
	{
		printf("List underflow");
		return;
	}
	printf("Deleted Element %d",CQ[Front]);
	if (Front==Rear)
	{
		Front=-1;
		Rear=-1;
	}
	else Front=(Front+1)%maxQ;
}

void Display()
{
	int i;	
	if (Front==-1 && Rear==-1)
	{
		printf("List underflow");
		return;
	}
	printf("Printing Circular Queue:\n");
    i = Front;
    while (1) {
        printf("%d ", CQ[i]);
        if (i == Rear) break;
        i = (i + 1) % maxQ;
    }
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
			CQInsertion(x);
		}
		else if(ch==2)
		{
			CQDeletion();
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
