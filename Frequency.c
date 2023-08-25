// Write a c program to find frequency of each digit in a given integer

#include<stdio.h>

int main()
{
    long int n, num;
    int i, lastDigit ;
    int freq[10];

    printf("enter a number: ");
    scanf("%ld", &num);
    
    for(i=0; i<10; i++)
    {
        freq[i] = 0;
    }

    n = num;

    while(n != 0)
    {
        lastDigit= n % 10;
        
        n /= 10;

        freq[lastDigit]++;
    }

    printf("frequency of each digit in %ld is: \n", num);
    for(i=0; i<10; i++)
    {
        printf("frequency of %d = %d\n",i, freq[i]);
    }
}