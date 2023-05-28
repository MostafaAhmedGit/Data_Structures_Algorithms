#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    struct node *prev;
    struct node *next;
    int data;
};


struct node *head;  //	25dt object mn el node


void Insert_beginning()
{
   struct node *ptr;
   int item;
   ptr = (struct node *)malloc(sizeof(struct node));
   
   if(ptr == NULL)	printf("\nNot enough memory ! ");

   else
   {
    printf("\nEnter Item value");
    scanf("%d",&item);

   if(head==NULL)	//lw dih awl node 
   {
       ptr->next = NULL;
       ptr->prev=NULL;
       ptr->data=item;
       head=ptr;
   }
   else				//lw da msh awl node 
   {
       ptr->data=item;
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;
       head=ptr;
   }
   printf("\nNode inserted\n");
}

}
void Insert_last()
{
   struct node *ptr,*temp;
   int item;
   ptr = (struct node *) malloc(sizeof(struct node));
  

  if(ptr == NULL)		printf("\n-----No Space !!!!!----");	//yb2a keda el mkan ma7goz 
   
   
   else
   {
       printf("\nEnter value");
       scanf("%d",&item);
		ptr->data=item;
		
       if(head == NULL)
       {
	   ptr->next = NULL;
	   ptr->prev = NULL;
	   head = ptr;
       }
       else
       {
	  temp = head;
	  
	  while(temp->next!=NULL)
	  {
	    temp = temp->next;
	  }
	  temp->next = ptr;
	  ptr ->prev=temp;
	  ptr->next = NULL;
	  }

       }
     printf("\nnode inserted\n");
    }

void display()
{
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
	printf("%d\n",ptr->data);
	ptr=ptr->next;
    }
}
void search()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr = head;
    if(ptr == NULL)
    {
	printf("\nEmpty List\n");
    }
    else
    {
	printf("\nEnter item which you want to search?\n");
	scanf("%d",&item);
	while (ptr!=NULL)
	{
	    if(ptr->data == item)
	    {
		printf("\nitem found at location %d ",i+1);
		flag=0;
		break;
	    }
	    else flag=1;
	    i++;
	    ptr = ptr -> next;
	}
	if(flag==1)
	{
	    printf("\nItem not found\n");
	}
    }

}
void main ()
{
	int choice =0;
	while(choice!=9){
	printf("\n*********Linked List *********\n");
	printf("\nChoose one option from the following list ...\n");
	printf("\n1.Insert in begining\n2.Insert at last\n3.Search\n4.Show");
	printf("\nEnter your choice?\n");
	scanf("%d",&choice);

	switch(choice)
	{
	    case 1:
	    Insert_beginning();
	    break;
	    case 2:
	    Insert_last();
	    break;
	    case 3:
	    search();
	    break;
	    case 4:
	    display();
		getch();
	    break;
	    case 9:
	    exit(1);
	    default:
	    printf("INVALID !!!");
	}
    }
}
