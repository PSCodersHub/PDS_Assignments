// ===============================================================
//                    ASSIGNMENT-4 (if-else)
// ===============================================================

// Q1. WAP to check whether a number is Even or Odd.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter an number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even", num);
    else
        printf("%d is Odd", num);
    return 0;
}
/*
Output:
Enter an number: 7
7 is Odd
*/


// Q2. WAP to check whether a number is positive, negative or zero.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter an number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Negative");
    else if (num > 0)
        printf("Positive");
    else
        printf("Zero");
    return 0;
}
/*
Output:
Enter an number: 11
Positive
*/


// Q3. Input a person's age check whether eligible to vote or not.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter your age: ");
    scanf("%d", &num);

    if (num >= 18)
        printf("Eligible to vote");
    else
        printf("Not Eligible to vote");
    return 0;
}
/*
Output:
Enter your age: 20
Eligible to vote
*/


// Q4. WAP to find the greatest number between three numbers.

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b) && (a > c))
        printf("%d is Greater", a);
    else if ((b > a) && (b > c))
        printf("%d is Greater", b);
    else
        printf("%d is Greater", c);

    return 0;
}
/*
Output:
Enter 3 numbers: 10 25 7
25 is Greater
*/


// Q5. WAP to calculate the grade of a student
//          Marks       Grade
//          >=90         O
//          >=80         E
//          >=70         A
//          >=60         B
//          >=50         C
//          >=40         D
//          <40          Fail

#include <stdio.h>
int main()
{
    int num;

    printf("Enter your mark: ");
    scanf("%d", &num);

    if (num >= 90 && num <= 100)
        printf("Grade = O");
    else if (num >= 80 && num < 90)
        printf("Grade = E");
    else if (num >= 70 && num < 80)
        printf("Grade = A");
    else if (num >= 60 && num < 70)
        printf("Grade = B");
    else if (num >= 50 && num < 60)
        printf("Grade = C");
    else if (num >= 40 && num < 50)
        printf("Grade = D");
    else if (num > 0 && num < 40)
        printf("Fail");
    else
        printf("Invalide Input");
    return 0;
}
/*
Output:
Enter your mark: 95
Grade = O
*/


// Q6. Write a C program to check whether a character is a vowel or consonant.

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel");
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}
/*
Output:
Enter a character: a
Vowel
*/


// Q7. Write a C program to check whether a given character is an uppercase letter, lowercase letter, digit, or special character.

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }

    return 0;
}
/*
Output:
Enter a character: 7
Digit
*/


// Q8. Write a C program to check whether the triangle is Equilateral, Isosceles or Scalene triangle.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilateral");
    else if (a == b || b == c || a == c)
        printf("Isosceles");
    else
        printf("Scalene");

    return 0;
}
/*
Output:
Enter three sides of the triangle: 5 5 5
Equilateral
*/


// Q9. Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//     Basic Salary <= 10000 : HRA = 20%, DA = 80%
//     Basic Salary <= 20000 : HRA = 25%, DA = 90%
//     Basic Salary >  20000 : HRA = 30%, DA = 95%

#include <stdio.h>
int main()
{
    float basic, hra, da, gross;
    printf("Enter employee salary: ");
    scanf("%f", &basic);

    if (basic <= 10000)
    {
        hra = basic * 0.20;
        da = basic * 0.80;
    }
    else if (basic <= 20000)
    {
        hra = basic * 0.25;
        da = basic * 0.90;
    }
    else
    {
        hra = basic * 0.30;
        da = basic * 0.95;
    }

    gross = basic + hra + da;
    printf("Gross Salary = %.2f", gross);

    return 0;
}
/*
Output:
Enter employee salary: 8000
Gross Salary = 16000.00
*/


// Q10. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//      For first 50 units Rs. 0.50/unit
//      For next 100 units Rs. 0.75/unit
//      For next 100 units Rs. 1.20/unit
//      For unit above 250 Rs. 1.50/unit

#include <stdio.h>
int main()
{
    float unit, bill;
    printf("Enter the electricity unit: ");
    scanf("%f", &unit);

    if (unit <= 50)
        bill = unit * 0.50;
    else if (unit <= 150)
        bill = 50 * 0.50 + (unit - 50) * 0.75;
    else if (unit <= 250)
        bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    else
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}
/*
Output:
Enter the electricity unit: 40
Electricity Bill = Rs. 20.00
*/