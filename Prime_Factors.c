// Write a c program to find all prime factors of a numbers

#include<stdio.h>
void PrimeFactor(int num)
{
    int count;

    printf("prime factors of %d are \n", num);
    for(count=2; num > 1; count++)                     // iteration
    {
        while(num% count==0)                           // checking formula
        {
            printf("%d  ", count);                     // 2 2 2 3
            num = num / count;
        }
    } 
    printf("\n");
}

int main()
{
    int num;

    printf("Enter any number: ");                   // 24
    scanf("%d", &num);

    PrimeFactor(num);                               // function call

    return 0;
}