/*Author:Miguel Tlapa Juarez 
  Date:August 28 2017 
  Version 1.0 */
#include <bubble_sort.h>
#include <stdio.h>
#inclide <stdlib.h>


int main()
{
int arr[] = {5, 9, 3, 1, 2};

int n = sizeof(arr)/sizeof(arr[0]);
int x;
printf("Original Set \n");
printArray(arr,n);
printf("\n");
printf("Type 0:Algorithm begins to the right, Type 1:Begins to the left\n");
scanf("%d",&x);
printf("Opcion seleccionada:%d\n",x);
switch(x){

  case 0:
          bubbleSortRight(arr,n);
          break;
  case 1:
         bubbleSortLeft(arr,n);
          break;
  default:
          printf("Invalid Value");

}
printf("%d",x);

printf("Sorted array: \n");
printArray(arr, n);
printf("\n");
return 0;
}
