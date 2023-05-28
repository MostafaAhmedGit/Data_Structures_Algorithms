#include<stdio.h>
#include<stdlib.h>




typedef struct Node
{
	int data;
	int *ptr;
	
}Node;


void main()
{
	Node root;
	
	
	
	root.data  = 1;
	
	root.ptr =  malloc(sizeof(Node));
	
	root.ptr->data  = 17;
	
	
	printf("%d\n",root.data);
	printf("%d\n",root.ptr->data);
	
	
}