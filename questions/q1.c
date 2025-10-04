#include <stdio.h>

void main()
{
    // int a = 4, b = 3;
    // printf("%d", a++ + b);
    // it says 4++ + 3 => which evaluates to 4 + 3 and post increment of a. so 7.

    // printf("%d", a++ + ++b);

    // int a = 9, b = 14;
    // // In bitwise operations first convert decimal into bitwise and then perform bitwise operations on them.
    // printf("Bitwise | => %d\n", a | b);
    // printf("Bitwise & => %d\n", a & b);
    // printf("Bitwise ~ => %d\n", ~a);

    // LEFT AND RIGHT SHIFT OPERATIONS
    // LEFT SHIFT --> left operand * [2^right operand]
    // RIGHT SHIFT --> left operand / [2^right operand]

    // int var = 3;
    // printf("LEFT Shift --> %d\n", var << 1);
    // printf("RIGHT Shift --> %d\n", var >> 1);

    // Question :-
    // Output is 5 4. Because sizeof is evaluated at compile time and i++ is not executed.
    // So, i remains 5 and size of int is 4 bytes.

    // int _ = 5;
    // int var = sizeof(_++);
    // printf("%d %d", _, var);

    // Question :- WAP which allow user to enter integer until he/she enters 0.

    // int num;
    // printf("Enter numbers (0 to stop): \n");
    // do
    // {
    //     scanf("%d", &num);
    // } while (num != 0);
    // printf("You entered 0, stopping now.\n");

    // Question :- WAP to print all ODD numbers from 1 to 20 using continue statement.
    // int num = 0;
    // do
    // {
    //     if (num % 2 == 0)
    //     {
    //         num++;
    //         continue;
    //     }
    //     printf("%d\n", num);
    //     num++;
    // } while (num <= 20);

    // WAP :- Pyramid of stars
    // int rows, cols;
    // printf("Enter number of rows => ");
    // scanf("%d", &rows);

    // cols = 2 * rows - 1;
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= cols; j++)
    //     {
    //         if (j >= rows - (i - 1) && j <= rows + (i - 1))
    //             printf(" * ");
    //         else
    //             printf("   ");
    //     }
    //     printf("\n");
    // }

    // WAP :- Palindrome check
    // int num;
    // printf("Enter a number to check if its palindrome => ");
    // scanf("%d", &num);

    // int resultantNum = 0;
    // int temp;
    // int origionalNum = num;
    // while (num)
    // {
    //     temp = num % 10;
    //     resultantNum = (resultantNum * 10) + temp;
    //     num = num / 10;
    // }

    // if (resultantNum == origionalNum)
    //     printf("Number %d is Palindrome", resultantNum);
    // else
    //     printf("Number %d is NOT Palindrome", resultantNum);

    // WAP :- Armstrong Number check.
    // Conditions to met :-
    // 1. From a number each digit of a number should be multiply by itself n(total number of digits in that number) number of times.
    // 2. Add them all and if that number is same as the origional the number is armstrong number.

    // int POW(int x, int y)
    // {

    //     int result = 1;
    //     while (y)
    //     {
    //         result *= x;
    //         y--;
    //     }

    //     return result;
    // }

    // int num;
    // printf("PLease enter a number to check if the number is armstrong number => ");
    // scanf("%d", &num);

    // int temp = num;
    // int digitsInNumber = 0;
    // int finalNumber = 0;
    // while (temp)
    // {
    //     temp /= 10;
    //     digitsInNumber++;
    // }

    // temp = num;
    // int lastDigit = 0;
    // while (temp)
    // {
    //     lastDigit = temp % 10;
    //     finalNumber = finalNumber + POW(lastDigit, digitsInNumber);
    //     temp /= 10;
    // }

    // int isPalindrome = finalNumber == num ? true : false;
    // if (isPalindrome)
    //     printf("The number %d is Armstrong.", num);
    // else
    //     printf("The number %d is NOT Armstrong.", num);

    // WAP :- Check if the number is strong or not.
    // Conditions to met :- sum of factorial of each number should be equal to origional number.

    int factorial(int x)
    {
        if (x <= 1)
            return 1;

        return (x * factorial(x - 1));
    }

    int num;
    printf("Enter number to check if its Strong number => ");
    scanf("%d", &num);

    int temp = num;
    int strongNum = 0;
    int remainder = 0;
    while (temp)
    {
        remainder = temp % 10;
        strongNum += factorial(remainder);
        temp /= 10;
    }

    int isStrongNum = strongNum == num ? true : false;
    if (isStrongNum)
        printf("Number %d is STRONG", num);
    else
        printf("Number %d is NOT STRONG", num);
}