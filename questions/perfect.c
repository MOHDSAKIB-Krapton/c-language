//  WAP to check if the number is perfect number or not.

#include <stdio.h>
#include <stdbool.h>

bool checkIfPerfectNum(int number)
{
    int sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    return sum == number ? true : false;
}

void main()
{
    int number;
    printf("Enter a positive number number: ");
    scanf("%d", &number);

    if (checkIfPerfectNum(number))
        printf("The number %d is perfect number.", number);
    else
        printf("The number %d is not perfect number.", number);
}