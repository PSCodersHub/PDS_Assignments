// Q1. WAP to perform Addition, Subtraction, Multiplication and Division on two floating point numbers?

#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("\nAddition = %0.2f\n", a + b);
    printf("Subtraction = %0.2f\n", a - b);
    printf("Multiplication = %0.2f\n", a * b);
    printf("Division = %0.2f", a / b);

    return 0;
}
/*
Output:
Enter the value of a: 8.0
Enter the value of b: 2.0

Addition = 10.00
Subtraction = 6.00
Multiplication = 16.00
Division = 4.00
*/

// Q2. WAP to display a student Name, Roll Number, Grade and CGPA by using

// ============ (i) Static Initialization ============

#include <stdio.h>
int main()
{
    char name[10] = "Priyanshu", grade = 'O';
    int roll = 149;
    float cgpa = 9.8;

    printf("Name = %s\n", name);
    printf("Roll = %d\n", roll);
    printf("Grade = %c\n", grade);
    printf("CGPA = %0.2f", cgpa);

    return 0;
}
/*
Output:
Name = Priyanshu
Roll = 149
Grade = O
CGPA = 9.80
*/

// ============ (ii) Dynamic Initialization ============

#include <stdio.h>
int main()
{
    char name[10], grade;
    int roll;
    float cgpa;

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Roll Number: ");
    scanf("%d", &roll);
    printf("Enter your Grade: ");
    scanf(" %c", &grade);
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("\nName = %s\n", name);
    printf("Roll = %d\n", roll);
    printf("Grade = %c\n", grade);
    printf("CGPA = %0.2f", cgpa);

    return 0;
}
/*
Output:
Enter your Name: Priyanshu
Enter your Roll Number: 149
Enter your Grade: O
Enter your CGPA: 9.88

Name = Priyanshu
Roll = 149
Grade = O
CGPA = 9.88
*/

// Q3. WAP to calculate the area of a circle by using a const variable?

#include <stdio.h>
int main()
{
    const float PI = 3.14;
    float radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle = %0.2f", area);
    
    return 0;
}
/*
Output:
Enter the radius of the circle: 12.4
Area of the circle = 482.81
*/

// Q4. WAP to take the marks of 5 different subjects as input and find the total % and display it?

#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5;
    float total, percentage;
    
    printf("Enter marks of 5 subjects:\n");
    scanf("%f", &m1);
    scanf("%f", &m2);
    scanf("%f", &m3);
    scanf("%f", &m4);
    scanf("%f", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    
    printf("Total Marks = %0.2f\n", total);
    printf("Percentage = %0.2f%%", percentage);
    
    return 0;
}
/*
Output:
Enter marks of 5 subjects:
68
98
75
89
82
Total Marks = 412.00
Percentage = 82.40%
*/


// =================== (Q4) Different Maximum Marks ===================

// NOTE:
// 👉 If the question assumes each subject is out of 100 marks,
//     then percentage = total / 5.
// 👉 If subjects have different maximum marks, then use:
//     percentage = (total_obtained / total_maximum) * 100.

#include <stdio.h>
int main() {
    float m1, m2, m3, m4, m5;          // marks obtained
    float max1, max2, max3, max4, max5; // maximum marks for each subject
    float total_obtained, total_max, percentage;

    printf("=====================================\n");
    printf("   Student Marks Percentage Program  \n");
    printf("=====================================\n\n");

    // Input marks obtained
    printf("Enter marks obtained in 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Input maximum marks for each subject
    printf("Enter maximum marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &max1, &max2, &max3, &max4, &max5);

    // Calculate totals
    total_obtained = m1 + m2 + m3 + m4 + m5;
    total_max = max1 + max2 + max3 + max4 + max5;

    // Calculate percentage
    percentage = (total_obtained / total_max) * 100;

    // Display results
    printf("\n-------------------------------------\n");
    printf("Total Marks Obtained = %.2f\n", total_obtained);
    printf("Total Maximum Marks  = %.2f\n", total_max);
    printf("Percentage           = %.2f%%", percentage);
    printf("-------------------------------------\n");

    return 0;
}
/*
=====================================
   Student Marks Percentage Program  
=====================================

Enter marks obtained in 5 subjects:
50 60 60 70 80
Enter maximum marks of 5 subjects:
50 60 60 70 80

-------------------------------------
Total Marks Obtained = 320.00
Total Maximum Marks  = 320.00
Percentage           = 100.00%
-------------------------------------
*/