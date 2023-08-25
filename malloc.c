#include<stdio.h>

int main()
{
    int size = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter number of elememts: \n");
    scanf("%d", &size);

    p = (int *) malloc (size * sizeof(int));

    printf("plz enter elements: \n");
    for(iCnt = 0; iCnt<size; iCnt++)
    {
        scanf("%d", &p[iCnt]);

    }

    printf("Enter elememts are: \n");
     for(iCnt = 0; iCnt<size; iCnt++)
    {
        printf("%d ", p[iCnt]);
    }
    printf("\n");

    free(p);
    return 0;
}