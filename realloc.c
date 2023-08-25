#include<stdio.h>

int main()
{
    int *ptr = NULL;

    ptr = (int *) malloc(5* sizeof(int));

    ptr = (int *) realloc(ptr, 0);

    free(ptr);
    return 0;
}