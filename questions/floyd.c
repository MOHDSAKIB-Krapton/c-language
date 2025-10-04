// WAP to write Floyd's triangle.
#include <stdio.h>

void main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int num = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%02d ", num);
            num++;
        }
        printf("\n");
    }
}