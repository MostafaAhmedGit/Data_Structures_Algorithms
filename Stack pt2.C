#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


typedef struct stack
{
	int size;
	int tos;
	int *stk;
	
}stack;

struct stack *obj;

void initStack(void)
{
	struct stack *ptr;
	
	int s;
	printf("Enter size of the stack :\n");
	scanf("%d",&s);
	
	ptr = (struct stack *)malloc(sizeof(struct stack));
	
	if(ptr == NULL){printf("\nNot enough memory ! ");getch();}

	else {printf("Done you Initialized a stack congrats !! ");getch();}
	
	/*
	obj->size=s;
	obj->tos=0;
	obj->stk = (struct stack obj *)malloc(s*sizeof(int));
	if(obj->stk !=NULL)		{printf("Not enough memory !\n"); getch(); exit(1);}
	else					{printf("Done you Initialized a stack congrats !! ");		getch();}
*/
}


void isFullStack(void)
{
if(obj->tos==obj->size){printf("You have more space babe <3");getch();} 
else {printf("Full ASF <3 !!!");			 getch();}	  
}

void isEmptyStack(void)
{
	if(obj->tos==0)
		printf("Empty ASF");
	else
		printf("Nope not empty bruv");

}

void push(void)
{
	int data;
	
	printf("Enter a data to be pushed inside : \n");
	scanf("%d",&data);
	
	if(ptr->tos!=0)		{printf("Stack is full already u can't push ffs !");	getch();}//checking if the stack is full !
	
	else
	{
	ptr->stk[ptr->tos] = data;
	ptr->tos ++;
	printf("Pushed <3 <3");
	getch();
	}
}

void pop(void)
{
if(ptr->tos==0) {printf("Nothing there bruv");getch();}
else
{
ptr->tos --;
printf("%d",ptr->stk[ptr->tos]);

}}

void main(void)
{
	int ch;
	
	
	while(ch!=6)
	{
	printf("Choose an Operation : \n1.Initialize the stack\n2.Stack's status\n3.Peek\n4.Push\n5.Pop\n6.Exit\n");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
		initStack();
		break;
		
		case 2:
		isFullStack();
		break;
		case 3:
		break;
		case 4:
		push();
		break;
		case 5:
		
		break;
		case 6://Terminate the program 
		exit(1);
		break;
	}
	}
}