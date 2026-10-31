// ===============================================================
//                    ASSIGNMENT-12 (2D Arrays)
// ===============================================================

// Q1. Input date into a [M]x[N] 2D array and display the data.

#include <stdio.h>
int main()
{
    int a[10][10];
    int m, n, i, j;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Input array elements
    printf("\nEnter array elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Display array elements
    printf("\nThe 2D Array is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:
Enter number of rows: 2
Enter number of columns: 3

Enter array elements:
10 20 30
40 50 60

The 2D Array is:
10      20      30
40      50      60
*/


// Q2. WAP a menu driven program to perform following operations on two 2D array.
//      1. Input
//      2. Display
//      3. Addition
//      4. Subtraction
//      5. Multiplication
//      6. Transpose

#include <stdio.h>
int main()
{
    // Declaration of two matrices and one result matrix
    int a[5][5], b[5][5], c[5][5];

    int r1, c1, r2, c2;
    int i, j, k, ch;
    int input = 0;

    // Input size of both matrices
    printf("Enter rows and columns of A: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns of B: ");
    scanf("%d%d", &r2, &c2);

    // Check maximum and minimum size
    if (r1 < 1 || r1 > 5 || c1 < 1 || c1 > 5 || r2 < 1 || r2 > 5 || c2 < 1 || c2 > 5)
    {
        printf("Invalid size! Maximum size is 5 x 5.");
        return 0;
    }

    // Display menu until user selects Exit
    do
    {
        printf("\n\n===== MENU =====");
        printf("\n1. Input");
        printf("\n2. Display");
        printf("\n3. Addition");
        printf("\n4. Subtraction");
        printf("\n5. Multiplication");
        printf("\n6. Transpose");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        // 1. Input elements into both matrices
        case 1:

            printf("\nEnter Matrix A:\n");
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\nEnter Matrix B:\n");
            for (i = 0; i < r2; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    scanf("%d", &b[i][j]);
                }
            }

            input = 1;
            break;

        // Check whether matrices are entered
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:

            if (input == 0)
            {
                printf("\nPlease select Input first!");
                break;
            }

            // 2. Display both matrices
            if (ch == 2)
            {
                printf("\nMatrix A:\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        printf("%d\t", a[i][j]);
                    }
                    printf("\n");
                }

                printf("\nMatrix B:\n");
                for (i = 0; i < r2; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        printf("%d\t", b[i][j]);
                    }
                    printf("\n");
                }
            }

            // 3. Addition of two matrices
            else if (ch == 3)
            {
                if (r1 == r2 && c1 == c2)
                {
                    printf("\nAddition:\n");
                    for (i = 0; i < r1; i++)
                    {
                        for (j = 0; j < c1; j++)
                        {
                            c[i][j] = a[i][j] + b[i][j];
                            printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                    printf("\nAddition not possible!");
            }

            // 4. Subtraction of two matrices
            else if (ch == 4)
            {
                if (r1 == r2 && c1 == c2)
                {
                    printf("\nSubtraction:\n");
                    for (i = 0; i < r1; i++)
                    {
                        for (j = 0; j < c1; j++)
                        {
                            c[i][j] = a[i][j] - b[i][j];
                            printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                    printf("\nSubtraction not possible!");
            }

            // 5. Multiplication of two matrices
            else if (ch == 5)
            {
                if (c1 == r2)
                {
                    printf("\nMultiplication:\n");
                    for (i = 0; i < r1; i++)
                    {
                        for (j = 0; j < c2; j++)
                        {
                            c[i][j] = 0;
                            for (k = 0; k < c1; k++)
                            {
                                c[i][j] += a[i][k] * b[k][j];
                            }
                            printf("%d\t", c[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                    printf("\nMultiplication not possible!");
            }

            // 6. Transpose of both matrices (Transpose: Rows become columns and columns become rows.)
            else if (ch == 6)
            {
                printf("\nTranspose of Matrix A:\n");
                for (j = 0; j < c1; j++)
                {
                    for (i = 0; i < r1; i++)
                    {
                        printf("%d\t", a[i][j]);
                    }
                    printf("\n");
                }

                printf("\nTranspose of Matrix B:\n");
                for (j = 0; j < c2; j++)
                {
                    for (i = 0; i < r2; i++)
                    {
                        printf("%d\t", b[i][j]);
                    }
                    printf("\n");
                }
            }
            break;

        // 7. Exit the program
        case 7:

            printf("\nThank you!");
            break;

        // If user enters an invalid choice
        default:

            printf("\nInvalid choice!");
        }
    } while (ch != 7);
    return 0;
}
/*
OUTPUT:
Enter rows and columns of A: 2 2
Enter rows and columns of B: 2 2


===== MENU =====
1. Input
2. Display
3. Addition
4. Subtraction
5. Multiplication
6. Transpose
7. Exit

Enter your choice: 1

Enter Matrix A:
1 2
3 4

Enter Matrix B:
5 6
7 8


===== MENU =====
1. Input
2. Display
3. Addition
4. Subtraction
5. Multiplication
6. Transpose
7. Exit

Enter your choice: 3

Addition:
6       8
10      12


===== MENU =====
1. Input
2. Display
3. Addition
4. Subtraction
5. Multiplication
6. Transpose
7. Exit

Enter your choice: 4

Subtraction:
-4      -4
-4      -4


===== MENU =====
1. Input
2. Display
3. Addition
4. Subtraction
5. Multiplication
6. Transpose
7. Exit

Enter your choice: 5

Multiplication:
19      22
43      50


===== MENU =====
1. Input
2. Display
3. Addition
4. Subtraction
5. Multiplication
6. Transpose
7. Exit

Enter your choice: 6

Transpose of Matrix A:
1       3
2       4

Transpose of Matrix B:
5       7
6       8


===== MENU =====
1. Input
2. Display
3. Addition
4. Subtraction
5. Multiplication
6. Transpose
7. Exit

Enter your choice: 7

Thank you!
*/