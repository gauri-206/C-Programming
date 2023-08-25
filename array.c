#include<stdio.h>

int main()
{
   int Arr[4] = {1, 2, 3, 4, 5};
   int i =34;
   int *iptr = &i;

   printf("%d \n", Arr[2]); 
   printf("%d \n", &Arr[2]); 
   printf("%d \n", &Arr); 
   printf("%d \n", sizeof Arr[2]); 
   printf("%d \n", sizeof Arr); 
   printf("%d \n", &Arr[0]); 
   printf("%d \n",  sizeof Arr[3]);  

   printf("%d\n", sizeof(*iptr)); 
}