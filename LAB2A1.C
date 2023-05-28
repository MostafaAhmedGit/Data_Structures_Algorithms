// C program for implementation of selection sort
#include <stdio.h>
#include <string.h>
#include<conio.h>
#define MAX_LEN	100
#define SIZE 	5
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort_int(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}
void selectionSort_char(char arr[][MAX_LEN], int n)
{
    int i, j, min_idx;
  
    // One by one move boundary of unsorted subarray
    char minStr[MAX_LEN];
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        int min_idx = i;
        strcpy(minStr, arr[i]);
        for (j = i+1; j < n; j++)
        {
            // If min is greater than arr[j]
            if (strcmp(minStr, arr[j]) > 0)
            {
                // Make arr[j] as minStr and update min_idx
                strcpy(minStr, arr[j]);
                min_idx = j;
            }
        }
  
        // Swap the found minimum element with the first element
        if (min_idx != i)
        {
            char temp[MAX_LEN];
            strcpy(temp, arr[i]); //swap item[pos] and item[i]
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}
  

/* Function to print an array */
void printArray_int(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	getch();
}


int main()
{
	int choice,i,n;
	int arr[] = {64, 25, 12, 22, 11};
	int arrS[][MAX_LEN] = {"Mostafa", "Ziad","Ahmed"};
	
	printf("Array of Integers enter 1\nArray of Strings enter 2\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
	//int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort_int(arr, SIZE);
	printf("Sorted array: \n");
	printArray_int(arr, SIZE);
	}
	else if(choice==2)
	{
		n = sizeof(arrS)/sizeof(arrS[0]);
		selectionSort_char(&arrS,SIZE);
		printf("\nSorted array is\n");
		for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arrS[i]);
		getch();
	}
	
	else
	{
		printf("Invalid ");
		getch();
		exit(1);
	}
	return 0;
}
