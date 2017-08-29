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
printf("%d ", arr[i]);

}

/* Function to sort the array begins to the left */
void bubbleSortLeft(int arr[], int n){
int i, j;
for (i = 0; i < n-1; i++) {
 
for (j = 0; j < n-i-1; j++) {
	if (arr[j] > arr[j+1])
	{
	swap(&arr[j], &arr[j+1]);
	}
  	printf("Iteration :%d: ",i);
  	printArray(arr,n);
  	printf("\n");
    }
}
}

/* Function to sort the array begins to the right */
void bubbleSortRight(int arr[], int n){
int i, j;
for (i = 0; i < n-1; i++) {

for(j=n-1; j>i; j--) {
	if (arr[j-1] > arr[j])
	{
	swap(&arr[j-1], &arr[j]);
	
	}
	printf("Iteration :%d: ",i);
	printArray(arr,n);
	printf("\n");
    }
}
}

 