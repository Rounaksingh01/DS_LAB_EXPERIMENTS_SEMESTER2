#include <stdio.h>
#include <stdlib.h>

struct node {
    int Info;
    struct node *Link;
};

struct node *start = NULL,*ptr,*fresh,*temp;

void traverse_print() {
    if (start == NULL) {
        printf("\nList is empty\n");
        return;
    }
    printf("\nLinked List: ");
    ptr = start;
    while (ptr != NULL) {
        printf("%d -> ", ptr->Info);
        ptr = ptr->Link;
    }
    printf("NULL\n");
}

void Insert(int item) {
    fresh = (struct node *)malloc(sizeof(struct node));
    if (start == NULL) {
        start=fresh;
        fresh->Link=NULL;
        fresh->Info=item;
    }
    else
    {
    	fresh->Link=start;
    	start=fresh;
		fresh->Info = item;	
	}
	printf("Successfully Inserted\n");
}

void Delete() {
    if (start == NULL) {
        printf("\nList is empty\n");
        return;
    }
    temp=start;
    start=start->Link; 
    printf("Deleted value: %d\n", temp->Info);
    free(temp);     
}

void Search(int item) {
    ptr=start;
    while (ptr != NULL) {
        if (ptr->Info == item) {
            printf("Item %d found in the list!\n", item);
            return;
        }
        ptr = ptr->Link;
    }
    printf("Item %d not found\n", item);
}

void Reverse()
{
	int s[100],i,Top;
	if(start==NULL)
	{
		printf("List does not exit");
		return;
	}
	ptr=start;
	Top=-1;
	while(ptr!=NULL)
	{
		Top++;
		s[Top]=ptr->Info;
		ptr=ptr->Link;
	}
	printf("\nLinked List in reverse order:");
	for (i=Top;i>=0;i--)
	{
		printf("%d -> ",s[i]);
	}
	printf("NULL\n");
}

int main() {
    int ch,item,op;

    printf("************ Menu ************\n");
    printf("1.Traverse\n2Insert\n3Delete\n4.Search\n5.Reverse");
 
    do {
        printf("\nEnter choice:");
        scanf("%d", &ch);
        if(ch==1)
        	traverse_print();
        else if (ch==2){
        	printf("Enter value: ");
            scanf("%d", &item);
            Insert(item);
		}
		else if(ch==3)
			Delete();
		else if(ch==4){
			printf("Enter value to search: ");
            scanf("%d", &item);
            Search(item);
		}
		else if(ch==5)
			Reverse();
		else
		    printf("Invalid choice!\n");
        printf("\ndo you want to continue(1 or 0): ");
        scanf("%d", &op);
    } while (op == 1);

    printf("Thank you!\n");
    return 0;
}
