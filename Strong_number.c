// Write a c program to check weather number is strong or not

#include<stdio.h>

int main()
{
    int i, num, orignalNum, LastDigit, fact, sum;

    printf("Enter any number: ");
    scanf("%d",&num);

    orignalNum = num;
    sum = 0;

    while(num>0)
    {
        LastDigit = num % 10;
        fact = 1;

        for(i=1; i<=LastDigit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        num = num / 10;
    }

    if(sum == orignalNum)
    {
        printf("numbet is strong.....\n");
    }
    else
    {
        printf("number is not strong.....\n");
    }

    return 0;
}
