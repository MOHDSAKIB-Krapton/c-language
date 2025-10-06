// WAP to find minimum and maximum value in an array using pointers.

#include <stdio.h>
#include <stdlib.h>

void minmax(int size, int arr[size], int *min, int *max)
{
    *min = *max = arr[0];
    for (int i = 1; i < size; i++)
    {

        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        else if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{

    int size;
    printf("Enter the size of list: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (!arr)
    {
        printf("Could not allocate memory");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min, max;
    minmax(size, arr, &min, &max);
    printf("Minimum & Maximum values are : %d, %d", min, max);

    return 0;
}