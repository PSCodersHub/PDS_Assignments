// ===============================================================
//                    ASSIGNMENT-7 (Series)
// ===============================================================

// Q1. WAP to print the Fibonacci series up to N terms.

#include <stdio.h>
int main()
{
    int n, i, sum = 0, first = 0, sec = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        sum = first + sec;
        first = sec;
        sec = sum;
    }
    return 0;
}
/*
Output:
Enter a number: 5
0 1 1 2 3
*/


// Q2. WAP to find the sum of the Fibonacci series up to N terms.

#include <stdio.h>
int main()
{
    int n, i, sum = 0, first = 0, sec = 1, add = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);
        sum = first + sec;
        add += first;
        first = sec;
        sec = sum;
    }

    printf("\nSum of Series = %d ", add);
    return 0;
}
/*
Output:
Enter a number: 5
0 1 1 2 3
Sum of Series = 7
*/


// Q3. WAP to print the following series and calculate its sum.

// i. 2 4 6 8 10 ... N

#include <stdio.h>
int main()
{
    int n, i, x = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        x = x + i * 2;
        printf("%d ", i * 2);
    }
    printf("\nSum = %d ", x);
    return 0;
}
/*
Output:
Enter a number: 5
2 4 6 8 10
Sum = 30
*/


// ii. 1 + 2 + 3 + ... + N

#include <stdio.h>
int main()
{
    int n, i, x = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        x = x + i;
        printf("%d ", i);
        if (i < n)
            printf("+ ");
    }
    printf("\nSum = %d ", x);
    return 0;
}
/*
Output:
Enter a number: 5
1 + 2 + 3 + 4 + 5
Sum = 15
*/


// iii. 1² + 2² + 3² + ... + N²

#include <stdio.h>
int main()
{
    int n, i, x = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        x = x + i * i;
        printf("%d^2 ", i);
        if (i < n)
            printf("+ ");
    }
    printf("\nSum = %d ", x);
    return 0;
}
/*
Output:
Enter a number: 5
1^2 + 2^2 + 3^2 + 4^2 + 5^2
Sum = 55
*/


// iv. 1³ + 2³ + 3³ + ... + N³

#include <stdio.h>
int main()
{
    int n, i, x = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        x = x + i * i * i;
        printf("%d^3 ", i);
        if (i < n)
            printf("+ ");
    }
    printf("\nSum = %d ", x);
    return 0;
}
/*
Output:
Enter a number: 5
1^3 + 2^3 + 3^3 + 4^3 + 5^3
Sum = 225
*/


// v. 1! + 2! + 3! + ... + N!

#include <stdio.h>
int main()
{
    int n, i, j, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j; // calculate i!
        }
        sum += fact; // add i! to sum
        printf("%d! ", i);
        if (i < n)
            printf("+ ");
    }
    printf("\nSum = %d ", sum);
    return 0;
}
/*
Output:
Enter a number: 5
1! + 2! + 3! + 4! + 5!
Sum = 153
*/


// vi. 1/1 + 1/2 + 1/3 + ... + 1/N

#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
        printf("1/%d ", i);
        if (i < n)
            printf("+ ");
    }
    printf("\nSum = %.2f ", sum);
    return 0;
}
/*
Output:
Enter a number: 5
1/1 + 1/2 + 1/3 + 1/4 + 1/5
Sum = 2.28
*/


// vii. 1/1² + 1/2² + 1/3² + ... + 1/N²

#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * i);
        printf("1/%d^2 ", i);
        if (i < n)
            printf("+ ");
    }
    printf("\nSum = %.2f ", sum);
    return 0;
}
/*
Output:
Enter a number: 5
1/1^2 + 1/2^2 + 1/3^2 + 1/4^2 + 1/5^2
Sum = 1.46
*/


// viii. 1/1! + 1/2! + 1/3! + ... + 1/N!

#include <stdio.h>
int main()
{
    int n, i, j, fact;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += 1.0 / fact;
        printf("1/%d! ", i);
        if (i < n)
            printf("+ ");
    }
    printf("\nSum = %.2f ", sum);
    return 0;
}
/*
Output:
Enter a number: 5
1/1! + 1/2! + 1/3! + 1/4! + 1/5!
Sum = 1.72
*/


// ix. 1 + 2 - 3 + 4 - 5 + 6 - ... ± N

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // even terms are added
        {
            sum += i;
            printf("%d ", i);
            if (i < n)
                printf("- ");
        }
        else // odd terms are subtracted (except the very first term)
        {
            if (i == 1) // first term stays positive
            {
                sum += i;
                printf("%d ", i);
                if (i < n)
                    printf("+ ");
            }
            else
            {
                sum -= i;
                printf("%d ", i);
                if (i < n)
                    printf("+ ");
            }
        }
    }
    printf("\nSum = %d ", sum);
    return 0;
}
/*
Output:
Enter a number: 10
1 + 2 - 3 + 4 - 5 + 6 - 7 + 8 - 9 + 10
Sum = 7
*/