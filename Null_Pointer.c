#include<stdio.h>

int main()
{
    int i =45;
    float j = 56.78;
    char ch = 'A';
    double d = 34.65;

    int *ip = &i;
    float *fp = &j;
    char *cp = &ch;
    double *dp = &dp;

    void *vp= NULL;

    vp = &ch;
    printf("%c\n ", *(char *) vp);

    vp = &i;
    printf("%d\n ", *(int *) vp );

    vp = &j;
    printf("%f\n ", *(float *) vp);

    vp =  &d;
    printf("%f\n ", *(double *)vp);

    printf("%d\n ", *ip);
}