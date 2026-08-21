// ===============================================================
//                    ASSIGNMENT-3 (Conditional Operators)
// ===============================================================

// Q1. WAP in C to input two numbers and find the greatest among two numbers.

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    (a>b)? printf("a is greater.") : printf("b is greater.");
    return 0;
}
/*
Output:
Enter a: 12
Enter b: 8
a is greater.
*/


// Q2. WAP in C to input three numbers and find the greatest among three numbers.

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    (a > b )?( a > c)? printf("Greatest number = %d", a) : printf("Greatest number = %d", c) : (b > c)? printf("Greatest number = %d", b) : printf("Greatest number = %d", c);
    return 0;
}
/*
Output:
Enter three numbers: 12 45 30
Greatest number = 45
*/


// Q3. WAP in C to input a year and check whether it is a leaf year or not.

#include <stdio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ?printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year) ;
    return 0;
}
/*
Output:
Enter a year: 2024
2024 is a leap year
*/


// Q4. WAP in C to input a number and check whether it is Even or Odd.

#include <stdio.h>
int main() {
    int num, t;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    t = num%2;
    (t==0) ? printf("%d is Even.", num) : printf("%d is Odd.", num);
    return 0;
}
/*
Output:
Enter an integer: 15
15 is Odd.
*/


// Q5. WAP in C to input a number and check whether it is a Positive number, Negative number or Zero.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    (num > 0)? printf("Positive"):(num < 0 )? printf("Negative") : printf("Zero");
    return 0;
}
/*
Output:
Enter a number: -7
Negative
*/


// Q6. WAP in C to input a person's age and check whether eligible to vote or not.

#include <stdio.h>
int main()
{
    int a;

    printf("Enter your Age: ");
    scanf("%d", &a);
    
    (a >= 18)? printf("Eligible for the vote.") : printf("Not Eligible for the vote.");
    return 0;
}
/*
Output:
Enter your Age: 16
Not Eligible for the vote.
*/