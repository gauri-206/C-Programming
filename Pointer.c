#include<stdio.h>

int main()
{
    int no =11;

    int *p = &no;

    int **q = &p;

    int ***r = &q;

    int ****a = &r;

    int *****b = &a;

    int ******c = &b;

    printf("%d\n ", *c);
    printf("%d\n ", *p);
    printf("%d\n ", &p);
    printf("%d\n ", ******c);

    return 0;
}

