#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shufflecard(int *arr, int n)
{
	int i;
	int j;
	srand(time(NULL));
	for(i=n-1;i>0;i--)
	{
		int j=rand()%(i+1);
		swap(&arr[i],&arr[j]);
		
	}
	
}
int main(void)
{
clock_t t;
int x; /*Print Values*/
int n; /*Size of Array */
int i=0; /*Iterations */
printf("Give the size of the array:");
scanf("%d",&n);

int *reverse_array 	=malloc(n*sizeof(int));
int *sort_array		=malloc(n*sizeof(int));

for(i=0;i<n;i++)
		{
		sort_array[i]	=i;
		reverse_array[n-i-1]=i;
		}

	
// shufflecard(shuffle_array,n);	
t=clock();

printf("Sort Array\n");
t=clock();
bubbleSortRight(sort_array, n);	
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);

printf("Reverse Array:\n");
bubbleSortRight(reverse_array, n);	
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);

return 0;
	
}