// Q1. Input your name, age, roll_no branch, percentage of marks and display.

#include <stdio.h>
int main()
{
    char name[50], branch[50];
    int age, roll_no;
    float percentage;

    printf("Enter Name: ");

    scanf(" %[^\n]", name);
    //    %[^\n] is the scanset conversion specifier in scanf difference from %s and %c
    //	%s read until the space and %c reads only 1 byte charater.
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Branch: ");
    scanf(" %[^\n]", branch);
    printf("Enter Percentage of Marks: ");
    scanf("%f", &percentage);

    printf("\n--- Student Details ---\n");
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("Roll No    : %d\n", roll_no);
    printf("Branch     : %s\n", branch);
    printf("Percentage : %.2f%%\n", percentage);

    return 0;
}
/*
Output:-
--------------------

Enter Name: madhav
Enter Age: 21
Enter Roll No: 111
Enter Branch: MCA
Enter Percentage of Marks: 60

--- Student Details ---
Name       : madhav
Age        : 21
Roll No    : 111
Branch     : MCA
Percentage : 60.00%

*/


// Q2. Input two numbers and display their addition, subtraction, division, multiplication and remainder result.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);

    if (b != 0)
    {
        printf("Division       : %.2f\n", (float)a / b);
        printf("Remainder      : %d\n", a % b);
    }
    else
    {
        printf("Division and remainder by zero are undefined.\n");
    }

    return 0;
}
/*
Output:-
--------------------

Enter two numbers: 22 77
Addition       : 99
Subtraction    : -55
Multiplication : 1694
Division       : 0.29
Remainder      : 22

*/


// Q3. Input principal, rate of interest, and time period, and calculate simple interest, compound interest, and total amount to pay in both the cases?

#include <stdio.h>
#include <math.h>
// math.h is standard in C use for higher precision calculations like roots, power, etc.

int main()
{
    double principal, rate, time;
    double si, total_si, ci, total_ci;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);
    printf("Enter Rate of interest (in %%): ");
    scanf("%lf", &rate);
    printf("Enter Time period (in years): ");
    scanf("%lf", &time);

    // Simple Interest
    si = (principal * rate * time) / 100.0;
    total_si = principal + si;

    // Compound Interest (compounded annually)
    total_ci = principal * pow(1 + (rate / 100.0), time); // pow stands for power
    ci = total_ci - principal;

    printf("\n--- Simple Interest Calculation ---\n");
    printf("Simple Interest     : %.2lf\n", si);
    printf("Total Amount to Pay : %.2lf\n", total_si);

    printf("\n--- Compound Interest Calculation ---\n");
    printf("Compound Interest   : %.2lf\n", ci);
    printf("Total Amount to Pay : %.2lf\n", total_ci);

    return 0;
}
/*
Output:-
--------------------

Enter Principal amount: 100000
Enter Rate of interest (in %): 12
Enter Time period (in years): 5

--- Simple Interest Calculation ---
Simple Interest     : 60000.00
Total Amount to Pay : 160000.00

--- Compound Interest Calculation ---
Compound Interest   : 76234.17
Total Amount to Pay : 176234.17

*/


// Q4. Input length, breadth, height, of a cube and find its surface area & volume

#include <stdio.h>
int main()
{
    float length, breadth, height;
    float surface_area, volume;

    printf("Enter length, breadth, and height: ");
    scanf("%f %f %f", &length, &breadth, &height);

    surface_area = 2 * (length * breadth + breadth * height + height * length);
    volume = length * breadth * height;

    printf("Surface Area : %.2f\n", surface_area);
    printf("Volume       : %.2f\n", volume);

    return 0;
}
/*
Output:-
--------------------
Enter length, breadth, and height: 20 30 40
Surface Area : 5200.00
Volume       : 24000.00

*/


// Q5. Input the radius and calculate the perimeter and area of the circle.

#include <stdio.h>
pi = 3.14;

int main()
{

    float area, perimeter, radius;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Perimeter: %.2f\n", perimeter);
    printf("Area     : %.2f\n", area);
    return 0;
}
/*
Output:-
--------------------
Enter radius of the circle: 11
Perimeter: 66.00
Area     : 363.00

*/


// Q6. Input your name, roll no, branch, semester and five subject marks. calculate total_mark secured and percentage of mark. Display a mark sheet.

#include <stdio.h>

int main()
{

    char name[50], branch[20];
    int roll_no, sem;
    float m1, m2, m3, m4, m5, total, percentage;

    // Input student details
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Roll No: ");
    scanf("%d", &roll_no);

    printf("Enter Branch: ");
    scanf("%s", branch);

    printf("Enter Semester: ");
    scanf("%d", &sem);

    // Input marks for 5 subjects

    printf("Enter marks for 5 subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    printf("Subject 4: ");
    scanf("%f", &m4);

    printf("Subject 5: ");
    scanf("%f", &m5);

    // Calculations
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    // Output Mark Sheet
    printf("\n----- MARK SHEET -----\n");
    printf("Name        : %s\n", name);
    printf("Roll No     : %d\n", roll_no);
    printf("Branch      : %s\n", branch);
    printf("Semester    : %d\n", sem);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    return 0;
}
/*
Output:-
--------------------

Enter Name: Madhav
Enter Roll No: 111
Enter Branch: MCA
Enter Semester: 1
Enter marks for 5 subjects:
Subject 1: 74
Subject 2: 79
Subject 3: 82
Subject 4: 89
Subject 5: 93

----- MARK SHEET -----
Name        : Madhav
Roll No     : 111
Branch      : MCA
Semester    : 1
Total Marks : 417.00 / 500
Percentage  : 83.40%

*/


// Q7. Input Temperature in Celsius and convert it into Fahrenheit and vice versa.

#include <stdio.h>

int main()
{
    float c, f, fahrenheit, celsius;

    // 1. Celsius to Fahrenheit
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &c);
    fahrenheit = (c * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit = %.2f\n\n", fahrenheit);

    // 2. Fahrenheit to Celsius
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);
    celsius = (f - 32.0) * 5.0 / 9.0;
    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}
/*
Output:-
--------------------
Enter Temperature in Celsius: 23
Temperature in Fahrenheit = 73.40

*/


// Q8. Input unit price and quantity of three objects and calculate the total price.

#include <stdio.h>
int main()
{
    float p1, p2, p3, total;
    int q1, q2, q3;

    // Input price and quantity for each object
    printf("Enter unit price and quantity for Object 1: ");
    scanf("%f %d", &p1, &q1);

    printf("Enter unit price and quantity for Object 2: ");
    scanf("%f %d", &p2, &q2);

    printf("Enter unit price and quantity for Object 3: ");
    scanf("%f %d", &p3, &q3);

    // Calculate total cost
    total = (p1 * q1) + (p2 * q2) + (p3 * q3);

    // Display total
    printf("\nTotal Price = %.2f\n", total);

    return 0;
}
/*
Output:-
--------------------
Enter unit price and quantity for Object 1: 1000
5000
Enter unit price and quantity for Object 2: 2500
1000
Enter unit price and quantity for Object 3: 3500
2000

Total Price = 14500000.00

*/