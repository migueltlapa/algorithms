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
int i, j;
double instructions=0;
int n_instructions[4];
for (i = 0; i < n-1; i++) {
	instructions++;
	for(j=n-1; j>i; j--) {
		instructions++;
		if (arr[j-1] > arr[j])
			{
			instructions++;
			swap(&arr[j-1], &arr[j]);
			}
	
		}
		/*//printf("Iteration :%d: ",i);
		printArray(arr,n);
		printf("\n");  */
		n_instructions[i+1]=instructions;
	
		
	}
	
	
	printf("# Instructions:%0.lf\n",instructions);
	printArray(n_instructions,n);
}

 