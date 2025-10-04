// The library stdio.h is Standard input Output header file in C programming language. Which includes functions for input and output operations like printf, scanf, etc.
#include <stdio.h>

// MACRO is a fragment of code in a program that is replaced by the preprocessor before the actual compilation starts. Here, we are defining a macro named PI with a value of 3.14 . NOTE :- Macros are generally written in uppercase to distinguish them from regular variables, and avoid using semicolons at the end of macro definitions.
#define __PI__ 3.14

// MACRO as a function. and \ can be used to split a macro definition into multiple lines for better readability.
#define __SQUARE__(x) \
    (x * x)

int main()
{
    int number;
    printf("WELCOME TO OUR PROGRAM.\n\n\n");

    printf("Below is the list of the services we provide: \n\n");

    printf("1. Calculate the square of a number.\n");
    printf("2. Know the value of PI. \n");
    printf("3. Know the current Date and Time. \n");

    printf("\n\n\nPlease enter the number corresponding to the service you want to use: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("You selected option 1.\n");
        printf("Enter a number to find its square: ");
        int num;
        scanf("%d", &num);
        printf("The square of %d is %d.\n", num, __SQUARE__(num));
        break;

    case 2:
        printf("You selected option 2.\n");
        printf("The value of PI is approximately: %.2f\n", __PI__);
        break;

    case 3:
        printf("Current Date => %s & Time => %s\n", __DATE__, __TIME__);
        break;

    default:
        printf("You selected the option which we currently dont have.");
        break;
    }

    printf("\n\n\n THANKYOU FOR USING OUR PROGRAM\n\n\n");
    return 0;
}