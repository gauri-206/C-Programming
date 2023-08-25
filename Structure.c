#include<stdio.h>

struct Demo
{
    int i;
    int f;

};

struct Hello
{
    int no;
    int x;
    struct Demo dobj;
    char ch;
};

int main()
{
    struct Hello hobj;

    printf("%d", sizeof(hobj));
    return 0;
}