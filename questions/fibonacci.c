// WAP to generate fibonacci series up to n terms.
#include <stdio.h>

void main()
{

    int fibonacci(int n)
    {
        int t1 = 0, t2 = 1, nextTerm = 0;
        printf("Fibonacci Series: \n");
        printf("%d\n", t1);
        printf("%d\n", t2);
        while (nextTerm <= n)
        {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            printf("%d\n", nextTerm);
        }
    }

    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    fibonacci(num);
}