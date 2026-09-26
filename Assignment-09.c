// ===============================================================
//                    ASSIGNMENT-9 (Functions)
// ===============================================================

// Q1. Write a C program using functions to create a calculator for
//     addition, subtraction, multiplication, and division.

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
float div(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1.Addition  2.Subtraction  3.Multiplication  4.Division\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    if (ch == 1)
        printf("Result = %d", add(a, b));
    else if (ch == 2)
        printf("Result = %d", sub(a, b));
    else if (ch == 3)
        printf("Result = %d", mul(a, b));
    else if (ch == 4)
        printf("Result = %.2f", div(a, b));
    else
        printf("Invalid choice");

    return 0;
}

/*
OUTPUT:

Enter two numbers: 10 5
1.Addition  2.Subtraction  3.Multiplication  4.Division
Enter choice: 1
Result = 15
*/

// ===============================================================

// Q2(a). WAP to swap two numbers - Call by Value

#include <stdio.h>
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;

    printf("Inside function: a = %d, b = %d", a, b);
}

int main()
{
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b);

    return 0;
}

/*
OUTPUT:

Before swap: a = 10, b = 20
Inside function: a = 20, b = 10
*/

// ===============================================================

// Q2(b). WAP to swap two numbers - Call by Reference

#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d", a, b);

    return 0;
}

/*
OUTPUT:

Before swap: a = 10, b = 20
After swap: a = 20, b = 10
*/

// ===============================================================

// Q3. Write a function to find the square and cube of a number.

#include <stdio.h>
void squareCube(int n)
{
    printf("Square = %d\n", n * n);
    printf("Cube = %d", n * n * n);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    squareCube(n);

    return 0;
}

/*
OUTPUT:

Enter number: 5
Square = 25
Cube = 125
*/

// ===============================================================

// Q4. Write a function evenOdd() that checks whether a given number is even or odd.

#include <stdio.h>
void evenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    evenOdd(n);

    return 0;
}

/*
OUTPUT:

Enter number: 7
Odd
*/

// ===============================================================

// Q5. Write a function to calculate the area of a circle with an argument and a return type.

#include <stdio.h>
float area(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area = %.2f", area(r));

    return 0;
}

/*
OUTPUT:

Enter radius: 5
Area = 78.50
*/

// ===============================================================

// Q6. Write a function to reverse a given integer.

#include <stdio.h>
int reverse(int n)
{
    int r = 0;

    while (n != 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    return r;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Reverse = %d", reverse(n));

    return 0;
}

/*
OUTPUT:

Enter number: 1234
Reverse = 4321
*/

// ===============================================================

// Q7. Write a function to check whether a number is prime or not.

#include <stdio.h>
int prime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (prime(n))
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}

/*
OUTPUT:

Enter number: 13
Prime number
*/

// ===============================================================

// Q8. Write a function to check whether a number is a palindrome.

#include <stdio.h>
int reverse(int n)
{
    int r = 0;

    while (n != 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    return r;
}

int main()
{
    int n, r;
    printf("Enter number: ");
    scanf("%d", &n);

    r = reverse(n);

    if (n == r)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}

/*
OUTPUT:

Enter number: 1221
Palindrome
*/

// ===============================================================

// Q9. Write a function to find the LCM of two numbers.

#include <stdio.h>
int lcm(int a, int b)
{
    int n = (a > b) ? a : b;

    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return n;

        n++;
    }
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("LCM = %d", lcm(a, b));

    return 0;
}

/*
OUTPUT:

Enter two numbers: 12 18
LCM = 36
*/

// ===============================================================

// Q10. Write a function to check whether a number is an Armstrong number.

#include <stdio.h>
int armstrong(int n)
{
    int original = n, sum = 0, digit;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    return sum == original;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}

/*
OUTPUT:

Enter number: 153
Armstrong number
*/