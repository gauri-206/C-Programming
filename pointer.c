#include<stdio.h>

int main()
{
    int val = 10;
    int *ptr = val;
    ptr = &val;


    printf("value of val  is: %d \n", val);
    printf("pointer holds: %p\n ",ptr);
}