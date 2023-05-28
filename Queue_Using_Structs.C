#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct Queue
{
	int size;		//size
	int rear;	//data on top
	int *que;  //ptr
}Queue;


void initQueue(Queue *q,int s)
{
	q->que = (int *)malloc(s*sizeof(int));		//dynamic memory allocation 
												
	
	if(q->que!=NULL)			//checking lw el mkan fady ?
	{
		q->size = s;
		q->rear = 0; //intialize top element with zero 
	}
	else			//keda msh fady !
	{printf("Insufficient memory try closing tabs !!");		exit(1);}
	
}

int isFull(Queue s)		//parameter el struct nafso keda call my value 
{
	if(s.rear==s.size)	return 1;
	else 				return 0;
}
int isEmpty(Queue s)		//parameter el struct nafso keda call my value 
{
	if(s.rear==0)	return 1;
	else 				return 0;
}

void input(Queue *s,int data)
{
	if(isFull(*s))		printf("wtf");		//check if its full 
	
	
	else	//		if not full then proceed
	{
		s->que[s->rear] = data;
		s->rear++;	
	}
}
/*
void output(Queue * s, int * data)
{ int i;
if(isEmpty(*s)) return 0;
*data = s->que[0];
for(i=0; i < s->rear ; i++)
s->que[i]= s->que[i+1];
s->rear --;
return 1;
}
*/

void print(Queue x)
{
    int i;
	
	for(i=0;i<x.size;i++)
		printf("%d\n",x.que[i]);

}
void main(void)
{
		Queue x;
		initQueue(&x,5);

if(isEmpty(x)){	printf("Emptyy !"); getch();}
		input(&x,12);
		input(&x,188);
		input(&x,9);
		print(x);


}