// WAP to check wether a year is leap year or not.
#include <stdio.h>
#include <stdbool.h>

bool checkIsLeapYear(int year)
{
    // Check if the year is divible by 4 or 400
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}

void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (checkIsLeapYear(year))
        printf("This is leap year");
    else
        printf("This is not leap year");
}