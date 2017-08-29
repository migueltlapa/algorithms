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

int *shuffle_array 	=malloc(n*sizeof(int));
int *reverse_array 	=malloc(n*sizeof(int));

for(i=0;i<n;i++)
		{
		shuffle_array[i]=i;
		reverse_array[i]=i;
		}
shufflecard(shuffle_array,n);	
t=clock();
bubbleSortRight(shuffle_array, n);	
printf("Shuffle Array\n");
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);


t=clock();
bubbleSortRight(reverse_array, n);	
printf("Shuffle Reverse:\n");
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);

t=clock();
bubbleSortRight(shuffle_array, n);	
printf("Shuffle Array\n");
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);


t=clock();
bubbleSortRight(reverse_array, n);	
printf("Shuffle Reverse:\n");
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);

t=clock();
bubbleSortRight(shuffle_array, n);	
printf("Shuffle Array\n");
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);


t=clock();
bubbleSortRight(reverse_array, n);	
printf("Shuffle Reverse:\n");
t=clock()-t;
printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);



	
return 0;
	
}