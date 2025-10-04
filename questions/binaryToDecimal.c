// WAP to conver binary number into decimal.
#include <stdio.h>
#include <math.h>

int binaryToDecimal(int num)
{
    int lastDigit;
    int sum = 0;
    int i = 0;
    while (num)
    {
        lastDigit = num % 10;
        int temp = lastDigit * pow(2, i++);
        sum += temp;
        num = num / 10;
    }

    return sum;
}

void main()
{
    int num;
    printf("Enter a binary number => ", num);
    scanf("%d", &num);
    printf("The Decimal equivalent of binary num %d is %d", num, binaryToDecimal(num));
}