// Q1. write a program in C to display numbers from 20 to 50 using for loop.

#include <stdio.h>
int main()
{
    int i;

    for (i = 20; i <= 50; i++)
    {
        printf("%d ", i);
    }
    return 0;
}
/*
Output:
20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50
*/


// Q2. Write a program in C to display numbers from 50 to 1 using for loop.

#include <stdio.h>
int main()
{
    int i;

    for (i = 50; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}
/*
Output:
50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
*/


// Q3. Write a program in C to display odd & even numbers within 100 separately using for loop.

#include <stdio.h>
int main()
{
    int i;
    printf("Even Numbers:-\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\nOdd Numbers:-\n");

    for (i = 2; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
/*
Output:
Even Numbers:-
2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62
64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100
Odd Numbers:-
3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63
65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99
*/


// Q4. Write a program in C to Count Number of Digits in an inputted Number using for Loop.

#include <stdio.h>
int main()
{
    int n, count;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        for (; n != 0; n = n / 10)
        {
            count++;
        }

        printf("Total digits= %d ", count);

        return 0;
    }
}
/*
Output:
Enter a number: 2026
Total digits= 4
*/


// Q5. Write a program in C to check whether a number is  prime or not.

#include <stdio.h>
int main()
{
    int n, i, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        is_prime = 0;
    }
    else
    {

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime == 1)
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("%d is not prime", n);
    }
    return 0;
}
/*
Output:
Enter a number: 7
7 is prime
*/


// Q6. Write a program in C to enter a number and find the sum of digits.

#include <stdio.h>
int main()
{
    int n, d, sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (n = n; n != 0; n = n / 10)
    {
        d = n % 10;
        sum = sum + d;
    }
    printf("Sum= %d ", sum);

    return 0;
}
/*
Output:
Enter a number: 1234
Sum= 10
*/


// Q7. Write a program in C to reverse a number.

#include <stdio.h>
int main()
{
    int n, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (; n != 0; n = n / 10)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
    }
    printf("Reversed number= %d ", rev);

    return 0;
}
/*
Output:
Enter a number: 534
Reversed number= 435
*/


// Q8. Write a program in C to find the greatest and smallest and sum of 10 numbers.

#include <stdio.h>

int main()
{
    int n, i, sum = 0, max, min;

    printf("Enter 10 numbers:\n");

    // Read the first number to initialize
    scanf("%d", &n);
    sum = max = min = n;

    // Read the remaining 9 numbers
    for (i = 1; i < 10; i++)
    {
        scanf("%d", &n);
        sum += n; // add to sum
        if (n > max)
            max = n; // update greatest
        if (n < min)
            min = n; // update smallest
    }

    printf("\nGreatest number = %d", max);
    printf("\nSmallest number = %d", min);
    printf("\nSum of numbers = %d\n", sum);

    return 0;
}
/*
Output:
Enter 10 numbers:
13
45
67
32
34
4
67
89
34
24

Greatest number = 89
Smallest number = 4
Sum of numbers = 409
*/