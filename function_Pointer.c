#include<stdio.h>


int addition(int a, int b)
{
    int ans =0;
    ans = a+b;

    return ans;
}

int main()
{
    int val1 = 45 , val2 = 68;
    int res = 0;

    int (*ptr) (int, int);                // creation of pointer function
    ptr = addition;                       // calling addition function

    res = ptr(val1, val2);

    //res =  addition(val1, val2);

    printf("%d \n ", res);
}