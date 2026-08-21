// ===============================================================
//                    ASSIGNMENT-2 (Continued)
// ===============================================================

// Q1. Write a program to enter the Principal amount, Rate of interest and Time period. Calculate the Simple Interest and Total amount.

#include <stdio.h>
int main()
{
    float principal, rate, time, simpleInterest, totalAmount;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time Period (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;
    totalAmount = principal + simpleInterest;

    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nTotal Amount = %.2f", totalAmount);
    return 0;
}
/*
Output:
Enter Principal Amount: 1000
Enter Rate of Interest: 5
Enter Time Period (in years): 2

Simple Interest = 100.00
Total Amount = 1100.00
*/


// Q2. Input the temperature in Celsius and find its equivalent in Fahrenheit.

#include <stdio.h>
int main()
{
    float c, f;

    printf("Enter Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    printf("Fahrenheit = %f", f);
    return 0;
}
/*
Output:
Enter Celsius: 25
Fahrenheit = 77.000000
*/


// Q3. Input the temperature in Fahrenheit and find its equivalent in Celsius.

#include <stdio.h>
int main()
{
    float c, f;
    
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f - 32) * 5 / 9;
    printf("Celsius = %f", c);
    return 0;
}
/*
Output:
Enter Fahrenheit: 98.6
Celsius = 37.000000
*/


// Q4. Input two numbers divide them and print the remainder and quotient.

#include <stdio.h>
int main()
{
    int a, b, quotient, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    quotient = a / b;
    remainder = a % b;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
/*
Output:
Enter two numbers: 17 5
Quotient = 3
Remainder = 2
*/