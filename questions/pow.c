// WAP to replicate POW function of <math.h> lib

#include <stdio.h>

double Pow(int num1, int num2)
{
    double result = 1.0;

    // If the number in power is in negative
    if (num2 < 0)
    {
        int times = -num2;
        while (times--)
        {
            result *= (1.0 / num1);
        }
    }
    else
    {
        while (num2--)
        {
            result *= num1;
        }
    }
    return result;
}

void main()
{
    int num1, num2;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("Power of %d ^ %d is => %lf", num1, num2, Pow(num1, num2));
}