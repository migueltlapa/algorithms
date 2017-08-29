/*Author:Miguel Tlapa Juarez 
  Date:August 28 2017 
  Version 1.1.3 */
/*My libraries */
  
  #include <bubble_sort.h>
/********************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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


int main(int argc, char *argv[])
{
clock_t t;
clock_t ts;
clock_t tp;


int x; /*Print Values*/
int n; /*Size of Array */
int i=0; /*Iterations */
int index=2;
printf("Give the size of the array:");
scanf("%d",&n);

int *sort_array		=malloc(n*sizeof(int));
int *reverse_array 	=malloc(n*sizeof(int));
int *shuffle_array 	=malloc(n*sizeof(int));
int *define_array   =malloc(n*sizeof(int));

printf("argv 0: %s\n",argv[0]);
printf("argv 1: %s\n",argv[1]);

if(argv[1][0]=='i')
{
while(i<n)
	{
	printf("[%d]:",i);
	scanf("%d",&define_array[i++]);
	}
}

else {
	for(i=0;i<n;i++)
		{
		sort_array[i]=i;
		shuffle_array[i]=i;
		reverse_array[n-i-1]=i;
		}

	shufflecard(shuffle_array,n);
}

/**********************************************/

printf("\n");

while(index<argc)
{
	if(strcmp(argv[index],"bs")==0 && (argv[1][0]=='i' ))
	{
		printf("BubbleSortRight \n");
		printf("Define Array:");
		printArray(define_array, n);
		printf("\n");
		t=clock();
		bubbleSortRight(define_array,n);
		t=clock()-t;
		printf("Time %f seconds to execute \n", ((double)t)/CLOCKS_PER_SEC);

	}
	
	if(strcmp(argv[index],"bs")==0 && (argv[1][0]=='a' ))
	{
		
			
		printf("BubleSortRight:\n");
		printf("Reverse Array:");
/* 		printArray(reverse_array, n); */
		printf("\n");
		ts=clock();
		bubbleSortRight(reverse_array,n);
		ts=clock()-ts;
		printf("Time %f seconds to execute \n",((double)ts)/CLOCKS_PER_SEC);
		printf(" \n");
		
			
		printf("BubleSortRight:\n");
		printf("Sort Array:   ");
/* 		printArray(sort_array, n); */
		printf("\n");	
		t=clock();
		bubbleSortRight(sort_array,n);
		t=clock()-t;
		printf("Time %f seconds to execute \n",((double)t)/CLOCKS_PER_SEC);
	
		printf("BubleSortRight:\n");
		printf("Shuffle Array:");
/* 		printArray(shuffle_array, n); */
		printf("\n");
		tp=clock();
		bubbleSortRight(shuffle_array,n);	
		tp=clock()-tp;
		printf("Time %f seconds to execute \n",((double)tp)/CLOCKS_PER_SEC);
		printf(" \n");
		
	
		

	}

	else if(strcmp(argv[index],"is")==0)
	{
		printf("IndexSort\n");
	}

	index++;
	
}

 
		

memset(reverse_array,'A',n);
memset(shuffle_array,'A',n);
memset(sort_array,'A',n);
memset(define_array,'A',n);

free(sort_array);
free(reverse_array);
free(shuffle_array);
free(define_array);


return 0;
}
