// Q1. Check Whether a Number is Positive, Negative, or Zero.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is Positive\n", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative\n", num);
    }
    else
    {
        printf("The number is Zero\n");
    }

    return 0;
}
/*
Output:-
--------------------
Enter a number: -25
-25 is Negative
*/


// Q2. Find Maximum Between Two Numbers.

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Maximum is: %d\n", a);
    }
    else if (b > a)
    {
        printf("Maximum is: %d\n", b);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}
/*
Output:-
--------------------
Enter two numbers: 32 74
Maximum is: 74
*/


// Q3. Find Maximum Between Three Numbers.

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Maximum is: %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Maximum is: %d\n", b);
    }
    else
    {
        printf("Maximum is: %d\n", c);
    }

    return 0;
}
/*
Output:-
--------------------
Enter three numbers: 53 39 99
Maximum is: 99
*/


// Q4. Check Whether a Number is Divisible by 7 and 14.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0 && num % 14 == 0)
    {
        printf("%d is divisible by both 7 and 14\n", num);
    }
    else
    {
        printf("%d is not divisible by both 7 and 14\n", num);
    }

    return 0;
}
/*
Output:-
--------------------
Enter a number: 7
7 is not divisible by both 7 and 14
*/


// Q5. Factorial of a Given Number Using goto.

#include <stdio.h>
int main()
{
    int n, i = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number does not exist.\n");
        return 0;
    }

fact_loop:
    if (i <= n)
    {
        fact = fact * i;
        i++;
        goto fact_loop;
    }

    printf("Factorial of %d = %lld\n", n, fact);
    return 0;
}
/*
Output:-
--------------------
Enter a number: 11
Factorial of 11 = 39916800
*/


// Q6. Check Even or Odd Using goto.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        goto even_block;
    }
    else
    {
        goto odd_block;
    }

even_block:
    printf("%d is Even\n", num);
    return 0;

odd_block:
    printf("%d is Odd\n", num);
    return 0;
}
/*
Output:-
--------------------
Enter a number: 11
11 is Odd
*/


// Q7. Print Numbers from 1 to 10 Using goto.\

#include <stdio.h>
int main()
{
    int i = 1;

print_loop:
    if (i <= 10)
    {
        printf("%d ", i);
        i++;
        goto print_loop;
    }
    printf("\n");

    return 0;
}
/*
Output:-
--------------------
1 2 3 4 5 6 7 8 9 10
*/


// Q8. Print Multiplication Table of a Number (up to 10) Using goto.

#include <stdio.h>
int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Table of %d:\n", num);
table_loop:
    if (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
        goto table_loop;
    }

    return 0;
}
/*
Output:-
--------------------
Enter a number: 11
Table of 11:
11 x 1 = 11
11 x 2 = 22
11 x 3 = 33
11 x 4 = 44
11 x 5 = 55
11 x 6 = 66
11 x 7 = 77
11 x 8 = 88
11 x 9 = 99
11 x 10 = 110
*/


// Q9. Find Sum of 10 Numbers Using goto.

#include <stdio.h>
int main()
{
    int count = 1, val, sum = 0;

sum_loop:
    if (count <= 10)
    {
        printf("Enter number %d: ", count);
        scanf("%d", &val);
        sum = sum + val;
        count++;
        goto sum_loop;
    }

    printf("\nTotal Sum = %d\n", sum);
    return 0;
}
/*
Output:-
--------------------
Enter number 1: 15
Enter number 2: 25
Enter number 3: 35
Enter number 4: 45
Enter number 5: 55
Enter number 6: 65
Enter number 7: 75
Enter number 8: 85
Enter number 9: 95
Enter number 10: 115

Total Sum = 610
*/


// Q10. Find Maximum Value of 10 Inputted Numbers Using goto.

#include <stdio.h>
int main()
{
    int count = 1, val, max;

    // Read the 1st number and initialize it as current max
    printf("Enter number 1: ");
    scanf("%d", &max);

max_loop:
    if (count < 10)
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &val);

        if (val > max)
        {
            max = val;
        }

        count++;
        goto max_loop;
    }

    printf("\nMaximum Value = %d\n", max);
    return 0;
}
/*
Output:-
--------------------
Enter number 1: 15
Enter number 2: 26
Enter number 3: 37
Enter number 4: 48
Enter number 5: 59
Enter number 6: 61
Enter number 7: 72
Enter number 8: 83
Enter number 9: 94
Enter number 10: 111

Maximum Value = 111
*/


// Q11. Find Minimum Value of 10 Inputted Numbers Using goto.

#include <stdio.h>
int main()
{
    int count = 1, val, min;

    // Read the 1st number and initialize it as current min
    printf("Enter number 1: ");
    scanf("%d", &min);

min_loop:
    if (count < 10)
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &val);

        if (val < min)
        {
            min = val;
        }

        count++;
        goto min_loop;
    }

    printf("\nMinimum Value = %d\n", min);
    return 0;
}
/*
Output:-
--------------------
Enter number 1: 15
Enter number 2: 26
Enter number 3: 37
Enter number 4: 48
Enter number 5: 59
Enter number 6: 61
Enter number 7: 72
Enter number 8: 83
Enter number 9: 94
Enter number 10: 111

Minimum Value = 15
*/