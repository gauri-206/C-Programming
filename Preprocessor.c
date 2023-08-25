#include<stdio.h> 

#define PI 3.14

int main()  // entry point function
{
    float ans = 0.0f;
    float Rad=9.0f;
    ans = PI * Rad * Rad;

    printf("Area is: %f\n", ans);
    return 0;
}