// Write a c program to print all prime numbers between 1 to 10

#include<stdio.h>

int main()
{
    int i, n=10, c, num;

    for( num = 1; num <= n; num++)
    {
        c = 0;

        for(i=2; i <= num/2; i++)
        {
            if(num%i==0)
            {
                c++;
                break;
            }
        }
        if (c==0 && num != 1)
            printf("%d\n", num);
    }
    return 0;
    
}