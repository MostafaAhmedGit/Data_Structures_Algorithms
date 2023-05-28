#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct node *prev;
	struct node *next;
	
}node;

typedef struct Linked_List
{
	struct node *start;
	struct node *end;

}Linked_List;

Linked_List ll;

struct Node *GetNewNode(void)
{
	int item;
	scanf("%d",&item);
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->item = ele;
	ptr->previous = NULL;
	ptr->next = NULL;
	return ptr;
}

/*
void append(Linked_List * ll, node * ele)
{
if(ll->start == NULL)
{
	ll->start=ll->end=ele;
}
else
{
	ele->prev=ll->end; // 1
	ll->end->next=ele; // 2
	ll->end=ele; // 3
}
}
*/

void main(void)
{                    
	int n;
	Linked_List ll;
	ll.start = ll.end = NULL;
	clrscr();
	printf("Element : ");
	GetNewNode();
	
}