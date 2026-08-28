// ===============================================================
//                    ASSIGNMENT-5 (switch case)
// ===============================================================

// Q1. WAP to calculate the grade of a student and display the result sheet
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

    if (num < 0 || num > 100)
    {
        printf("Invalid Input");
        return 0;
    }
    switch (num / 10)
    {
    case 10:
    case 9:
        printf("Grade = O");
        break;
    case 8:
        printf("Grade = E");
        break;
    case 7:
        printf("Grade = A");
        break;
    case 6:
        printf("Grade = B");
        break;
    case 5:
        printf("Grade = C");
        break;
    case 4:
        printf("Grade = D");
        break;
    default:
        printf("Fail");
    }
    return 0;
}
/*
Output:
Enter your mark: 98
Grade = O
*/


// Q2. Write a C program to input a number from 1 to 7 and display the corresponding day of the week.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number (1-7): ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}
/*
Output:
Enter a number (1-7): 4
Thursday
*/


// Q3. Write a C program to input a character and check whether it is a vowel or consonant.

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }
    return 0;
}
/*
Output:
Enter a character: o
Vowel
*/


// Q4. Write a C program to create a simple calculator.

#include <stdio.h>
int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\n======================");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n======================");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Result = %d", a + b);
        break;
    case 2:
        printf("Result = %d", a - b);
        break;
    case 3:
        printf("Result = %d", a * b);
        break;
    case 4:
        printf("Result = %d", a / b);
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}
/*
Output:
Enter two numbers: 12 4

======================
1. Addition
2. Subtraction
3. Multiplication
4. Division
======================
Enter your choice: 3
Result = 48
*/


// Q5. Write a C program to calculate the area of different geometric shapes using switch-case.
//     Menu:
//      Circle
//      Rectangle
//      Triangle
//      Square

#include <stdio.h>
int main()
{
    int choice;
    float r, l, b, h, s;

    printf("======================");
    printf("\n1. Circle");
    printf("\n2. Rectangle");
    printf("\n3. Triangle");
    printf("\n4. Square");
    printf("\n======================");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter radius: ");
        scanf("%f", &r);
        printf("Area = %.2f", 3.14 * r * r);
        break;
    case 2:
        printf("Enter length and breadth: ");
        scanf("%f%f", &l, &b);
        printf("Area = %.2f", l * b);
        break;
    case 3:
        printf("Enter base and height: ");
        scanf("%f%f", &b, &h);
        printf("Area = %.2f", 0.5 * b * h);
        break;
    case 4:
        printf("Enter side: ");
        scanf("%f", &s);
        printf("Area = %.2f", s * s);
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}
/*
Output:
======================
1. Circle
2. Rectangle
3. Triangle
4. Square
======================
Enter your choice: 1
Enter radius: 5
Area = 78.50
*/