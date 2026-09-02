// ===============================================================
//                    ASSIGNMENT-6 (Loops)
// ===============================================================

// Q1. WAP to find the sum of the first N natural numbers.

#include <stdio.h>
int main()
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        sum += i;

    printf("Sum = %d", sum);
    return 0;
}
/*
Output:
Enter a number: 10
Sum = 55
*/


// Q2. WAP program to find the sum of all Even numbers and Odd numbers separately from 1 to N.

#include <stdio.h>
int main()
{
    int n, i, Even = 0, Odd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            Even += i;
        else
            Odd += i;
    }

    printf("Even Sum = %d\n", Even);
    printf("Odd Sum = %d", Odd);
    return 0;
}
/*
Output:
Enter a number: 10
Even Sum = 30
Odd Sum = 25
*/


// Q3. WAP to print the Multiplication table of a given number.

#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, i * n);
    }
    return 0;
}
/*
Output:
Enter a number: 7
7 X 1 = 7
7 X 2 = 14
7 X 3 = 21
7 X 4 = 28
7 X 5 = 35
7 X 6 = 42
7 X 7 = 49
7 X 8 = 56
7 X 9 = 63
7 X 10 = 70
*/


// Q4. WAP to print the Multiplication tables from 1 to 10.

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
            printf("%d X %d = %d\n", i, j, i * j);

        printf("\n");
    }
    return 0;
}
/*
Output:
1 X 1 = 1
1 X 2 = 2
1 X 3 = 3
1 X 4 = 4
1 X 5 = 5
1 X 6 = 6
1 X 7 = 7
1 X 8 = 8
1 X 9 = 9
1 X 10 = 10

...

10 X 1 = 10
10 X 2 = 20
10 X 3 = 30
10 X 4 = 40
10 X 5 = 50
10 X 6 = 60
10 X 7 = 70
10 X 8 = 80
10 X 9 = 90
10 X 10 = 100
*/


// Q5. WAP to find the Factorial of a number.

#include <stdio.h>
int main()
{
    int i, fact = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d is %d", n, fact);
    return 0;
}
/*
Output:
Enter a number: 5
Factorial of 5 is 120
*/


// Q6. WAP to count the number of digits in a given number.

#include <stdio.h>
int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        count = 1;
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits = %d", count);
    return 0;
}
/*
Output:
Enter a number: 2024
Number of digits = 4
*/


// Q7. WAP to find the sum of digits of a given number.

#include <stdio.h>
int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}
/*
Output:
Enter a number: 1378
Sum of digits = 19
*/


// Q8. WAP to Reverse a number.

#include <stdio.h>
int main()
{
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    printf("Reverse = %d", rev);
    return 0;
}
/*
Output:
Enter a number: 124
Reverse = 421
*/


// Q9. WAP to check whether a given number is a Palindrome.

#include <stdio.h>
int main()
{
    int num, original, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    if (original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
/*
Output:
Enter a number: 121
Palindrome
*/


// Q10. WAP to check whether a given number is an Aremstrong number.

#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, digit, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp)
    {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp)
    {
        digit = temp % 10;
        sum += pow(digit, count); // sum = sum + pow(5, 3) = 5³ = 125
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
/*
Output:
Enter a number: 153
Armstrong number
*/


// Q11. WAP to check whether a given number is a Prime number.

#include <stdio.h>
int main()
{
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (num > 1 && flag == 0)
        printf("Prime number");
    else
        printf("Not a Prime number");

    return 0;
}
/*
Output:
Enter a number: 7
Prime number
*/


// Q12. WAP to print all Prime numbers between 1 and N.

#include <stdio.h>
int main()
{
    int n, i, j, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        flag = 0;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", i);
    }

    return 0;
}
/*
Output:
Enter a number: 13
2 3 5 7 11 13
*/


// Q13. WAP to check if a number is a Perfect number or not.

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
/*
Output:
Enter a number: 28
Perfect Number
*/


// Q14. Write a C program to print all Armstrong numbers between 1 and 1000.

#include <stdio.h>
int main()
{
    int n, t, d, sum;

    for (n = 1; n <= 1000; n++)
    {
        t = n;
        sum = 0;

        while (t != 0)
        {
            d = t % 10;
            sum = sum + d * d * d;
            t = t / 10;
        }

        if (sum == n)
            printf("%d ", n);
    }
    return 0;
}
/*
Output:
1 153 370 371 407
*/


// Q15. Write a C program to print all Palindrome numbers between 1 and 1000.

#include <stdio.h>
int main()
{
    int n, t, rev, d;

    for (n = 1; n <= 1000; n++)
    {
        t = n;
        rev = 0;

        while (t != 0)
        {
            d = t % 10;
            rev = rev * 10 + d;
            t = t / 10;
        }

        if (rev == n)
            printf("%d ", n);
    }
    return 0;
}
/*
Output:
1 2 3 4 5 6 7 8 9 11 ... 989 999
*/