#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[10];      //static memory allocation

    int size = 0;
    int *ptr= NULL;

    printf,("Enter the size of array: \n");
    scanf("%d ",&size);

    ptr = malloc (sizeof(int) * size);
    return 0;
}