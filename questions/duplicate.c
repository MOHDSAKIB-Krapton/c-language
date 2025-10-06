// WAP to check if any of the number appears more than once in the list.

// Approach 1: RAW
// #include <stdio.h>

// void main()
// {

//     int size;
//     printf("Enter the length of list: ");
//     scanf("%d", &size);

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter value %d:", i);
//         scanf("%d", &arr[i]);
//     }

//     int flag = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 printf("Number %d is being repeated\n", arr[i]);
//                 flag = 1;
//                 continue;
//             }
//         }
//     }

//     if (!flag)
//     {
//         printf("No Number has been repeated in the list.");
//     }
// }

// Approach 2: Optimized using dynamic memory allocation + checking duplication in sorted array.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int size;
    printf("Enter the size of your list: ");
    scanf("%d", &size);

    // Dynamic memory allocation.
    int *arr = (int *)malloc(size * sizeof(int));
    if (!arr)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sorting array in O(log n)
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    bool isDuplicate;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            printf("Number %d is being repeated\n", arr[i]);
            isDuplicate = true;
        }
    }

    if (!isDuplicate)
    {
        printf("No duplicate found in list.");
    }

    return 0;
}