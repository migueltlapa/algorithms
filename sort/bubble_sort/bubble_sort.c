#include <stdio.h>

void swap (int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
	{
	printf("%d ", arr[i]);
	}
}

/* Function to sort the array begins to the right */
void bubbleSortRight(int arr[], int n){
int i, j,instructions=1;
for (i = 0; i < n-1; i++) {
	instructions++;
for(j=n-1; j>i; j--) {
	
	if (arr[j-1] > arr[j])
	{
	instructions++;
	swap(&arr[j-1], &arr[j]);
	
	}
	instructions++;
    }
	/*//printf("Iteration :%d: ",i);
	printArray(arr,n);
	printf("\n");  */
}

printf("Instructions:%d\n",instructions);
}

 