#include<stdio.h>

int main()
{
    int arr[10][10], col, row, i,j;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of col: ");
    scanf("%d", &col);
    
    printf("Enter the elements: \n");
    for(i=0; i<row; i++)
       for (j=0; j<col; j++)
          scanf("%d", &arr[i][j]);


    printf("Entered elements are: \n");

    for(i=0; i<row; i++)
    {
        for( j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
}