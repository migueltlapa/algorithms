#include <stdio.h>
#include <errno.h>
#include <unistd.h>

void tostring(int num, FILE *fp)
{
	int i, rem, n,len=0;
	n=num;
	while(n!=0)
	{
		len++;
		n/=10;
			
	}
	
	char *str=malloc((len+1)*sizeof(int));
	
	for(i=0;i<len;i++)
	{
		rem=num%10;
		num=num/10;
		str[len -(i+1)]=rem+ '0';
		
	}
	str[len]=' ';
	printf("Conversion: %s",str);
	fputs(str,fp);
	

	free(str);
	
}

FILE *create_file()
{
	FILE *fp;
	int z=0;
	fp=fopen("/mnt/c/algoritmos/sort/bubble_sort/output_inst.txt","w+");
	return fp;
	
}

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
	printf("\n");
}

/* Function to sort the array begins to the right */
void bubbleSortRight(int arr[], int n){
static FILE *n_file;


if(n_file==NULL)
{
	n_file=create_file();

}

int i, j;
double instructions=1;
int *n_instructions	=malloc(n*sizeof(int));

n_instructions[0]=1;

tostring(instructions,n_file);

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
		tostring(instructions,n_file);
			
	}
	printf("# Instructions:%0.lf\n",instructions);
	printArray(n_instructions,n);
	//tostring(conversion,instructions);

free(n_instructions);	
} 