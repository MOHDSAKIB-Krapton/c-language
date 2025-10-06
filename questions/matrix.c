// WAP to perform operations on matrix.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void welcomeMessage()
{
    printf("===============================================================");
    printf("WELCOME TO MATRIX MULTIPLICATION");
    printf("===============================================================");
}

bool validateMultiplication(int col_1, int row_2)
{

    return col_1 == row_2 ? true : false;
}

void scanMatrixValues(int row, int col, int matrix[row][col], const char *name)
{

    printf("Fill the values of %s:\n", name);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the value of %s[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrix(int row_1, int col_1, int row_2, int col_2, int matrixA[row_1][col_1], int matrixB[row_2][col_2], int resultantMatrix[row_1][col_2])
{
    int sum = 0;
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            for (int k = 0; k < col_1; k++)
            {
                sum += matrixA[i][k] * matrixB[k][j];
            }
            resultantMatrix[i][j] = sum;
            sum = 0;
        }
    }
}

void printMatrix(int row, int col, int matrix[row][col], char *name)
{
    printf("Values of %s \n", name);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%02d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    welcomeMessage();

    int row_1, col_1, row_2, col_2;
    printf("\n\nEnter the number of rows and cols of matrix A: ");
    scanf("%d %d", &row_1, &col_1);
    printf("\n\nEnter the number of rows and cols of matrix B: ");
    scanf("%d %d", &row_2, &col_2);

    if (!validateMultiplication(col_1, row_2))
    {
        printf("Matrix multiplication is Not possible, Please run the program again and use different dimensions.");
        exit(0); // exit(0) means we are exiting the program with no issues. exit(1) refers to something is wrong.
    }

    int matrixA[row_1][col_1], matrixB[row_2][col_2], resultantMatrix[row_1][col_2];

    // Scan the matrix A Values:
    scanMatrixValues(row_1, col_1, matrixA, "MATRIX A");
    scanMatrixValues(row_2, col_2, matrixB, "MATRIX B");

    // Calculate resultant matrix.
    multiplyMatrix(row_1, col_1, row_2, col_2, matrixA, matrixB, resultantMatrix);

    // Print Matrix
    printMatrix(row_1, col_1, matrixA, "Matrix A");
    printMatrix(row_2, col_2, matrixB, "Matrix B");
    printMatrix(row_1, col_2, resultantMatrix, "Resultant Matrix");
}