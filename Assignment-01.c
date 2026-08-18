// Q1. WAP to print "Welcome to KIIT"?

#include <stdio.h>
int main() {
    printf("Welcome to KIIT");
    return 0;
}
/*
Output:
Welcome to KIIT
*/


// Q2. WAP to display your Roll Number, Section, Marks and Grade?

#include <stdio.h>
int main() {
    printf("Roll Number: 101\n");
    printf("Section: C\n");
    printf("Marks: 98\n");
    printf("Grade: O");
    return 0;
}
/*
Output:
Roll Number: 101
Section: C
Marks: 98
Grade: O
*/


// Q3. WAP to display your Roll Number, Section, Marks and Grade by initialising the variables?

#include <stdio.h>
int main() {
    int roll = 101;
    char section = 'C';
    int marks = 85;
    char grade = 'O';

    printf("Roll Number: %d\n", roll);
    printf("Section: %c\n", section);
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);
    return 0;
}
/*
Output:
Roll Number: 101
Section: C
Marks: 85
Grade: O
*/


// Q4. WAP to Add, Sub, Mul & Divide two integer values?

#include <stdio.h>
int main() {
    int a = 20, b = 10;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b); // Integer division
    return 0;
}
/*
Output:
Addition: 30
Subtraction: 10
Multiplication: 200
Division: 2
*/


// Q5. WAP to swap the values of two integer variables? (With 3rd Variable and Without 3rd Variable)

#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;

    // With 3rd variable
    temp = b;
    b = a;
    a = temp;
    printf("After swapping with 3rd variable: a=%d, b=%d\n", a, b);

    // Reset values
    a = 5; b = 10;

    // Without 3rd variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without 3rd variable: a=%d, b=%d\n", a, b);

    return 0;
}
/*
Output:
After swapping with 3rd variable: a=10, b=5
After swapping without 3rd variable: a=10, b=5
*/


/*-----------------------------------------------------------
🎯 IMPORTANT STUFFS TO REMEMBER IN C PROGRAMMING
------------------------------------------------------------

📌 FORMAT SPECIFIERS:
    %d  → Integer (int)
    %f  → Float (float)
    %c  → Character (char)
    %lf → Double (double)
    %s  → String / more than one characters (char array)

📌 BASIC STRUCTURE:
    #include <stdio.h>   → Header file for input/output
    int main() {         → Main function starts
        // Your code here
        return 0;        → End of program
    }

📌 INPUT / OUTPUT:
    printf("Hello");     → Display output
    scanf("%d", &num);   → Take input (note: & is used)

📌 OPERATORS:
    +  → Addition
    -  → Subtraction
    *  → Multiplication
    /  → Division

📌 SWAPPING VALUES:
    With 3rd variable:
        temp = a;
        a = b;
        b = temp;

    Without 3rd variable:
        a = a + b;
        b = a - b;
        a = a - b;

📌 TIPS:
    - Always use \n for new line in output
    - C is case-sensitive (printf ≠ Printf)
    - Practice with small codes first
    - Comment your code for clarity

------------------------------------------------------------*/