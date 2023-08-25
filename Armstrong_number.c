// write a c program to print all armstrong number from 1 to 500

#include<stdio.h>

int main()
{
    int num, count = 1, r, sum;

    while(count<=10000)
    {
        num = count;
        sum = 0;

        while (num)
        {
            r = num %10;
            sum = sum+(r*r*r);
            num = num/10;
        }
        if (count == sum)
        {
            printf("%d\n", count);
        }
        count++;
        
    }
    return 0;
    
}