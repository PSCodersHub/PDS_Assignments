// Q1. Write a C program to input two numbers and demonstrate <, >, <=, >=, ==, and !=.

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Displays 1 (True) or 0 (False) for each comparison
    printf("%d <  %d : %d\n", a, b, a < b);
    printf("%d >  %d : %d\n", a, b, a > b);
    printf("%d <= %d : %d\n", a, b, a <= b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);

    return 0;
}
/*
Output:-
--------------------
Enter two numbers: 44 77
44 <  77 : 1
44 >  77 : 0
44 <= 77 : 1
44 >= 77 : 0
44 == 77 : 0
44 != 77 : 1
*/


// Q2. Write a C program to demonstrate the logical AND (&&), OR (||), and NOT (!) operators.

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Check if both numbers are positive
    printf("(%d > 0) && (%d > 0) : %d\n", a, b, (a > 0) && (b > 0));

    // Check if at least one number is positive
    printf("(%d > 0) || (%d > 0) : %d\n", a, b, (a > 0) || (b > 0));

    // Invert the condition
    printf("!(%d > 0)             : %d\n", a, !(a > 0));

    return 0;
}
/*
Output:-
--------------------
Enter two numbers: 44 77
(44 > 0) && (77 > 0) : 1
(44 > 0) || (77 > 0) : 1
!(44 > 0)             : 0
*/


// Q3. Write a C program to demonstrate =, +=, -=, *=, /=, and %= operators.

#include <stdio.h>
int main()
{
    int x;

    printf("Enter an initial number: ");
    scanf("%d", &x);

    printf("Initial value : %d\n", x);

    x += 10; // x = x + 10
    printf("After x += 10 : %d\n", x);

    x -= 4; // x = x - 4
    printf("After x -= 4  : %d\n", x);

    x *= 2; // x = x * 2
    printf("After x *= 2  : %d\n", x);

    x /= 3; // x = x / 3
    printf("After x /= 3  : %d\n", x);

    x %= 5; // x = x % 5 (Remainder)
    printf("After x %%= 5  : %d\n", x);

    return 0;
}
/*
Output:-
--------------------
Enter an initial number: 11
Initial value : 11
After x += 10 : 21
After x -= 4  : 17
After x *= 2  : 34
After x /= 3  : 11
After x %= 5  : 1
*/


// Q4. Write a C program to demonstrate pre-increment, post-increment, pre-decrement, and post-decrement operators.

#include <stdio.h>
int main()
{
    int x = 10;

    printf("Starting value of x: %d\n\n", x);

    printf("1. Post-increment (x++) : %d (Prints current, then increments)\n", x++);
    printf("   Value now            : %d\n\n", x);

    printf("2. Pre-increment  (++x) : %d (Increments first, then prints)\n", ++x);
    printf("   Value now            : %d\n\n", x);

    printf("3. Post-decrement (x--) : %d (Prints current, then decrements)\n", x--);
    printf("   Value now            : %d\n\n", x);

    printf("4. Pre-decrement  (--x) : %d (Decrements first, then prints)\n", --x);
    printf("   Value now            : %d\n", x);

    return 0;
}
/*
Output:-
--------------------
Starting value of x: 10

1. Post-increment (x++) : 10 (Prints current, then increments)
   Value now            : 11

2. Pre-increment  (++x) : 12 (Increments first, then prints)
   Value now            : 12

3. Post-decrement (x--) : 12 (Prints current, then decrements)
   Value now            : 11

4. Pre-decrement  (--x) : 10 (Decrements first, then prints)
   Value now            : 10
*/


// Q5. Write a C program to find the greater of two numbers using the conditional (?:) operator.

#include <stdio.h>
int main()
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    printf("The greater number is: %d\n", max);

    return 0;
}
/*
Output:-
--------------------
Enter two numbers: 44 77
The greater number is: 77
*/


// Q6. Write a C program to demonstrate the bitwise AND (&) operator.

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Example: 5 (0101) & 3 (0011) = 1 (0001)
    printf("Bitwise AND (%d & %d) = %d\n", a, b, a & b);

    return 0;
}
/*
Output:-
--------------------
Enter two numbers: 44 77
Bitwise AND (44 & 77) = 12
*/


// Q7. Write a C program to demonstrate bitwise OR (|) and XOR (^) operators.

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Bitwise OR  (%d | %d) = %d\n", a, b, a | b);
    printf("Bitwise XOR (%d ^ %d) = %d\n", a, b, a ^ b);

    return 0;
}
/*
Output:-
--------------------
Enter two numbers: 44 77
Bitwise OR  (44 | 77) = 109
Bitwise XOR (44 ^ 77) = 97
*/


// Q8. Write a C program to demonstrate the bitwise NOT (~) operator.

#include <stdio.h>
int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Bitwise NOT (~%d) = %d\n", a, ~a);

    return 0;
}
/*
Output:-
--------------------
Enter a number: 7
Bitwise NOT (~7) = -8
*/


// Q9. Write a C program to demonstrate the left shift (<<) operator.

#include <stdio.h>
int main()
{
    int num, shift;

    printf("Enter number and number of bits to shift: ");
    scanf("%d %d", &num, &shift);

    // num << shift multiplies num by 2^shift
    printf("%d << %d = %d\n", num, shift, num << shift);

    return 0;
}
/*
Output:-
--------------------
Enter number and number of bits to shift: 7 2
7 << 2 = 28
*/


// Q10. Write a C program to demonstrate the right shift (>>) operator.

#include <stdio.h>
int main()
{
    int num, shift;

    printf("Enter number and number of bits to shift: ");
    scanf("%d %d", &num, &shift);

    // num >> shift divides num by 2^shift
    printf("%d >> %d = %d\n", num, shift, num >> shift);

    return 0;
}
/*
Output:-
--------------------
Enter number and number of bits to shift: 7 2
7 >> 2 = 1
*/


// Q11. Write a C program to demonstrate the sizeof operator for different data types.
//      Write a program to input Roll no, Registration No, Name, Branch, Subject marks . Calculate total mark and percentage. Calculate Grade as per
//      your university norms (percentage >=90 Grade 'O', percentage >=80  and percentage <90 Grade 'E' , percentage >=70  and percentage <80 Grade 'A',
//      percentage >=60  and percentage <70 Grade 'B', percentage >=50  and percentage <60 Grade 'C', percentage >=40  and percentage <50 Grade 'D',
//      percentage <40 Grade 'F'. Generate a mark sheet . Use  if else and switch case in separate programs.

// =======================================================================
//          11A. Size of Different Data Types Using sizeof
// =======================================================================

#include <stdio.h>
int main()
{
    printf("Size of char        : %lu byte(s)\n", sizeof(char));
    printf("Size of short       : %lu byte(s)\n", sizeof(short));
    printf("Size of int         : %lu byte(s)\n", sizeof(int));
    printf("Size of long        : %lu byte(s)\n", sizeof(long));
    printf("Size of long long   : %lu byte(s)\n", sizeof(long long));
    printf("Size of float       : %lu byte(s)\n", sizeof(float));
    printf("Size of double      : %lu byte(s)\n", sizeof(double));
    printf("Size of long double : %lu byte(s)\n", sizeof(long double));

    return 0;
}
/*
Output:-
--------------------
Size of char        : 1 byte(s)
Size of short       : 2 byte(s)
Size of int         : 4 byte(s)
Size of long        : 4 byte(s)
Size of long long   : 8 byte(s)
Size of float       : 4 byte(s)
Size of double      : 8 byte(s)
Size of long double : 16 byte(s)
*/

// =======================================================================
//             11B (Part 1). Mark Sheet & Grade Using if-else
// =======================================================================

#include <stdio.h>
int main()
{
    char name[50], branch[30], grade;
    int roll_no;
    long reg_no;
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Registration No: ");
    scanf("%ld", &reg_no);
    printf("Enter Branch: ");
    scanf(" %[^\n]", branch);

    printf("Enter marks for 5 subjects (out of 100): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    // University grading criteria
    if (percentage >= 90)
    {
        grade = 'O';
    }
    else if (percentage >= 80)
    {
        grade = 'E';
    }
    else if (percentage >= 70)
    {
        grade = 'A';
    }
    else if (percentage >= 60)
    {
        grade = 'B';
    }
    else if (percentage >= 50)
    {
        grade = 'C';
    }
    else if (percentage >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("\n================ MARK SHEET ================\n");
    printf("Name        : %s\n", name);
    printf("Roll No     : %d\n", roll_no);
    printf("Reg. No     : %ld\n", reg_no);
    printf("Branch      : %s\n", branch);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);
    printf("============================================\n");

    return 0;
}
/*
Output:-
--------------------
Enter Name: Madhab
Enter Roll No: 111
Enter Registration No: 12345678
Enter Branch: MCA
Enter marks for 5 subjects (out of 100): 70 64 75 81 84

================ MARK SHEET ================
Name        : Madhab
Roll No     : 111
Reg. No     : 12345678
Branch      : MCA
Total Marks : 374.00 / 500
Percentage  : 74.80%
Grade       : A
============================================
*/

// =======================================================================
//          11B (Part 2). Mark Sheet & Grade Using switch-case
// =======================================================================

#include <stdio.h>
int main()
{
    char name[50], branch[30], grade;
    int roll_no;
    long reg_no;
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter Registration No: ");
    scanf("%ld", &reg_no);
    printf("Enter Branch: ");
    scanf(" %[^\n]", branch);

    printf("Enter marks for 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100.0;

    switch ((int)percentage / 10)
    {
    case 10:
    case 9:
        grade = 'O';
        break;
    case 8:
        grade = 'E';
        break;
    case 7:
        grade = 'A';
        break;
    case 6:
        grade = 'B';
        break;
    case 5:
        grade = 'C';
        break;
    case 4:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }

    printf("\n================ MARK SHEET ================\n");
    printf("Name        : %s\n", name);
    printf("Roll No     : %d\n", roll_no);
    printf("Reg. No     : %ld\n", reg_no);
    printf("Branch      : %s\n", branch);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);
    printf("============================================\n");

    return 0;
}
/*
Output:-
--------------------
Enter Name: Madhab
Enter Roll No: 111
Enter Registration No: 12345678
Enter Branch: MCA
Enter marks for 5 subjects: 82 93 87 95 98

================ MARK SHEET ================
Name        : Madhab
Roll No     : 111
Reg. No     : 12345678
Branch      : MCA
Total Marks : 455.00 / 500
Percentage  : 91.00%
Grade       : O
============================================
*/


// Q12. Write a program in C to check whether the entered year is Leap Year or not.

#include <stdio.h>
int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}
/*
Output:-
--------------------
Enter year: 2024
2024 is a Leap Year.
*/


// Q13. Write a program to enter two time intervals in (HH:MM:SS) and calculate  the difference in (HH:MM:SS).

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int h1, m1, s1, h2, m2, s2;
    int total_sec1, total_sec2, diff_sec;
    int dh, dm, ds;

    printf("Enter Start Time (HH MM SS): ");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Enter End Time   (HH MM SS): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    // Convert both into total seconds
    total_sec1 = (h1 * 3600) + (m1 * 60) + s1;
    total_sec2 = (h2 * 3600) + (m2 * 60) + s2;

    diff_sec = abs(total_sec2 - total_sec1);

    // Extract hours, minutes, seconds from difference
    dh = diff_sec / 3600;
    dm = (diff_sec % 3600) / 60;
    ds = diff_sec % 60;

    printf("\nTime Difference = %02d:%02d:%02d\n", dh, dm, ds);

    return 0;
}
/*
Output:-
--------------------
Enter Start Time (HH MM SS): 09 56 15
Enter End Time   (HH MM SS): 23 59 58

Time Difference = 14:03:43
*/


// Q14. Write a program to input a string and display in ASCII format.

#include <stdio.h>
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("\nCharacter  ASCII Code\n");
    printf("---------------------\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("    '%c'   ->   %d\n", str[i], (int)str[i]);
    }

    return 0;
}
/*
Output:-
--------------------
Enter a string: hey
Character  ASCII Code
---------------------
    'h'   ->   104
    'e'   ->   101
    'y'   ->   121
    ' '   ->   32
*/


// 15. Write a program in C to Generate Electric Bill by taking input such as Consumer number, Consumer Name,
//     Meter Number, Previous Meter Reading and Current meter reading as per the following condition:
//     Total Units  upto 100 units  	Charges  2.00 Rupees per unit.
//     > 100 and  <=200 		Charges  3.00 Rupees per unit.
//     > 200 and  <=300 		Charges  4.50 Rupees per unit.
//     > 300 and  <=500 		Charges  5.50 Rupees per unit.
//     > 500 units			    Charges  7.00 Rupees per unit.

#include <stdio.h>
int main()
{
    int consumer_no;
    char consumer_name[50], meter_no[30];
    float prev_reading, curr_reading, units, bill = 0.0;

    printf("Enter Consumer Number: ");
    scanf("%d", &consumer_no);
    printf("Enter Consumer Name: ");
    scanf(" %[^\n]", consumer_name);
    printf("Enter Meter Number: ");
    scanf(" %[^\n]", meter_no);
    printf("Enter Previous Meter Reading: ");
    scanf("%f", &prev_reading);
    printf("Enter Current Meter Reading: ");
    scanf("%f", &curr_reading);

    units = curr_reading - prev_reading;

    if (units < 0)
    {
        printf("Error: Current reading cannot be less than previous reading.\n");
        return 0;
    }

    // Slab calculation
    if (units <= 100)
    {
        bill = units * 2.00;
    }
    else if (units <= 200)
    {
        bill = (100 * 2.00) + (units - 100) * 3.00;
    }
    else if (units <= 300)
    {
        bill = (100 * 2.00) + (100 * 3.00) + (units - 200) * 4.50;
    }
    else if (units <= 500)
    {
        bill = (100 * 2.00) + (100 * 3.00) + (100 * 4.50) + (units - 300) * 5.50;
    }
    else
    {
        bill = (100 * 2.00) + (100 * 3.00) + (100 * 4.50) + (200 * 5.50) + (units - 500) * 7.00;
    }

    printf("\n============= ELECTRICITY BILL =============\n");
    printf("Consumer No.     : %d\n", consumer_no);
    printf("Consumer Name    : %s\n", consumer_name);
    printf("Meter No.        : %s\n", meter_no);
    printf("Previous Reading : %.2f\n", prev_reading);
    printf("Current Reading  : %.2f\n", curr_reading);
    printf("Total Units      : %.2f\n", units);
    printf("--------------------------------------------\n");
    printf("Total Charges    : Rs. %.2f\n", bill);
    printf("============================================\n");

    return 0;
}
/*
Output:-
--------------------
Enter Consumer Number: 123456789
Enter Consumer Name: Madhab
Enter Meter Number: 654321
Enter Previous Meter Reading: 12000
Enter Current Meter Reading: 13500

============= ELECTRICITY BILL =============
Consumer No.     : 123456789
Consumer Name    : Madhab
Meter No.        : 654321
Previous Reading : 12000.00
Current Reading  : 13500.00
Total Units      : 1500.00
--------------------------------------------
Total Charges    : Rs. 9050.00
============================================
*/