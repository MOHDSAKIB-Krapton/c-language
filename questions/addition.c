// WAP to do addition without + operator.
#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // This is to optimize the loop so that we always loop the smaller number of times.
    int smallNum = num1 < num2 ? num1 : num2;
    int largeNum = num1 > num2 ? num1 : num2;

    // Check if any number is negative.
    if (smallNum < 0 || largeNum < 0)
    {
        // Check if both numbers are negative.
        if (smallNum < 0 && largeNum < 0)
        {
            while (smallNum++)
            {
                largeNum--;
            }
        }
        // If one number is negative.
        else
        {
            while (smallNum++)
            {
                largeNum--;
            }
        }
    }
    // If both numbers are positive.
    else
    {
        while (smallNum--)
        {
            largeNum++;
        }
    }

    printf("Sum = %d\n", largeNum);
}