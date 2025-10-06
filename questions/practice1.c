#include <stdio.h>

int func1(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num >>= 1;
    }
    return count;
}

void main()
{
    // Question1
    printf("Value of retured by func with value 435 is: %d", func1(435));
}