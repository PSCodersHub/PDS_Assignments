// ===============================================================
//                    ASSIGNMENT-10 (Recursion)
// ===============================================================

// Q1. Write a recursive function to find the sum of two numbers.

#include <stdio.h>
int sum(int a, int b)
{
    if (b == 0)
        return a;

    return sum(a + 1, b - 1);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", sum(a, b));

    return 0;
}

/*
OUTPUT:

Enter two numbers: 15 25
Sum = 40
*/

// ===============================================================

// Q2. Write a recursive function to generate the first n terms of the Fibonacci series.

#include <stdio.h>
void fibonacci(int n, int a, int b)
{
    if (n == 0)
        return;

    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    fibonacci(n, 0, 1);
    printf("\n");

    return 0;
}

/*
OUTPUT:

Enter the number of terms: 7
Fibonacci series: 0 1 1 2 3 5 8
*/

// ===============================================================

// Q3. Write a recursive function to calculate the factorial of a number.

#include <stdio.h>
long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld\n", factorial(n));

    return 0;
}

/*
OUTPUT:

Enter a number: 5
Factorial = 120
*/

// ===============================================================

// Q4. Write a recursive function to find the GCD (HCF) of two numbers.

#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD (HCF) = %d\n", gcd(a, b));

    return 0;
}

/*
OUTPUT:

Enter two numbers: 48 18
GCD (HCF) = 6
*/

// ===============================================================

// Q5. Write a recursive function to find the sum of the series:
//     1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h>
double seriesSum(int n)
{
    if (n == 1)
        return 1.0;

    return (1.0 / n) + seriesSum(n - 1);
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of the series = %.4lf\n", seriesSum(n));

    return 0;
}

/*
OUTPUT:

Enter the value of n: 5
Sum of the series = 2.2833
*/