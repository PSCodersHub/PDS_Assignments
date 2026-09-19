// ===============================================================
//                    ASSIGNMENT-8 (Patterns)
// ===============================================================

// Q1. WAP to display the following patterns.

// i. Right
//      *
//      * *
//      * * *
//      * * * *
//      * * * * *

#include <stdio.h>
void pattern1(int);
void main()
{
    int n; // Number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern1(n);
}
void pattern1(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
*
* *
* * *
* * * *
* * * * *
*/


// ii. Inverted (of Right)
//      * * * * *
//      * * * *
//      * * *
//      * *
//      *

#include <stdio.h>
void pattern2(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern2(n);
}
void pattern2(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
* * * * *
* * * *
* * *
* *
*
*/


// iii. Left
//          *
//         **
//        ***
//       ****
//      *****

#include <stdio.h>
void pattern3(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern3(n);
}
void pattern3(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
    *
   **
  ***
 ****
*****
*/


// iv. Inverted (of Left)
//      *****
//       ****
//        ***
//         **
//          *

#include <stdio.h>
void pattern4(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern4(n);
}
void pattern4(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
*****
 ****
  ***
   **
    *
*/


// v. Pyramid
//          *
//         ***
//        *****
//       *******
//      *********

#include <stdio.h>
void pattern5(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern5(n);
}
void pattern5(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
    *
   ***
  *****
 *******
*********
*/


// vi. Inverted (Pyramid)
//      *********
//       *******
//        *****
//         ***
//          *

#include <stdio.h>
void pattern6(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern6(n);
}
void pattern6(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * (n - i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
*********
 *******
  *****
   ***
    *
*/


// vii. Diamond
//          *
//         ***
//        *****
//       *******
//      *********
//       *******
//        *****
//         ***
//          *

#include <stdio.h>
void pattern7(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern7(n);
}
void pattern7(int n)
{
    int i, j;
    // Upper half (Pyramid)
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Lower half (Inverted Pyramid)
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/


// viii. Increased
//      1
//      1 2
//      1 2 3
//      1 2 3 4
//      1 2 3 4 5

#include <stdio.h>
void pattern8(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern8(n);
}
void pattern8(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/


// ix. Decreased
//      1 2 3 4 5
//      1 2 3 4
//      1 2 3
//      1 2
//      1

#include <stdio.h>

void pattern9(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern9(n);
}
void pattern9(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/


// x. Repeat
//      1
//      2 2
//      3 3 3
//      4 4 4 4
//      5 5 5 5 5

#include <stdio.h>
void pattern10(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern10(n);
}
void pattern10(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/


// xi. Reverse
//      5 4 3 2 1
//      5 4 3 2
//      5 4 3
//      5 4
//      5

#include <stdio.h>
void pattern11(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern11(n);
}
void pattern11(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/


// xii. Continuous
//      1
//      2 3
//      4 5 6
//      7 8 9 10

#include <stdio.h>
void pattern12(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern12(n);
}
void pattern12(int n)
{
    int i, j, k = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 4
1
2 3
4 5 6
7 8 9 10
*/


// xiii. Pyramid
//          1
//         123
//        12345
//       1234567
//      123456789

#include <stdio.h>
void pattern13(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern13(n);
}
void pattern13(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
    1
   123
  12345
 1234567
123456789
*/


// xiv. Repeat Pyramid
//          1
//         222
//        33333
//       4444444
//      555555555

#include <stdio.h>
void pattern14(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern14(n);
}
void pattern14(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
    1
   222
  33333
 4444444
555555555
*/


// xv. Inverted (Pyramid)
//      123456789
//       1234567
//        12345
//         123
//          1

#include <stdio.h>
void pattern15(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern15(n);
}
void pattern15(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * (n - i) + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
123456789
 1234567
  12345
   123
    1
*/


// xvi. Alphabet
//      A
//      AB
//      ABC
//      ABCD
//      ABCDE

#include <stdio.h>
void pattern16(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern16(n);
}
void pattern16(int n)
{
    int i, j;
    char ch;
    for (i = 1; i <= n; i++)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
A
AB
ABC
ABCD
ABCDE
*/


// xvii. Repeated
//      A
//      BB
//      CCC
//      DDDD
//      EEEEE

#include <stdio.h>
void pattern17(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern17(n);
}
void pattern17(int n)
{
    int i, j;
    char ch;
    for (i = 1; i <= n; i++)
    {
        ch = 'A' + i - 1;
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
A
BB
CCC
DDDD
EEEEE
*/


// xviii. Reverse
//      ABCDE
//      ABCD
//      ABC
//      AB
//      A

#include <stdio.h>
void pattern18(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern18(n);
}
void pattern18(int n)
{
    int i, j;
    char ch;
    for (i = n; i >= 1; i--)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
ABCDE
ABCD
ABC
AB
A
*/


// xix. Continuous
//      A
//      BC
//      DEF
//      GHIJ
//      KLMNO

#include <stdio.h>
void pattern19(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern19(n);
}
void pattern19(int n)
{
    int i, j;
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
A
BC
DEF
GHIJ
KLMNO
*/


// xx. Pyramid
//          A
//         ABC
//        ABCDE
//       ABCDEFG
//      ABCDEFGHI

#include <stdio.h>
void pattern20(int);
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pattern20(n);
}
void pattern20(int n)
{
    int i, j;
    char ch;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        ch = 'A';
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows: 5
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
*/
