#include<stdio.h>

int main()
{
    int val = 10;
    float *ptr = &val;

    printf("value of val is: %d", val);
    printf("Pointer hold: %p",ptr);
}