#include<stdio.h>


// typedef Old_Name New_Name ;

typedef const int CINT;
typedef unsigned int UTNT;

int main()
{
    const int no = 11;   
    CINT i = 11; 
    
    unsigned int x =21;
    UTNT y = 21;

    printf("%d\n", i);
    printf("%d\n", y);

    printf("%d\n", no);
    printf("%d\n", x);

    return 0;
}