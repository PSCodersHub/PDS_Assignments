// ===============================================================
//                    ASSIGNMENT-11 (Arrays)
// ===============================================================

// Q1. WAP to read and display the elements of an array.

#include <stdio.h>
int main()
{
    int arr[50], n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*
OUTPUT:
Enter size: 5
Enter 5 elements: 10 20 30 40 50
Array elements: 10 20 30 40 50
*/


// Q2. WAP to find the sum and average of all elements in an array.

#include <stdio.h>
int main()
{
    int arr[50], n, i, sum = 0;
    float avg;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);
    return 0;
}
/*
OUTPUT:
Enter size: 5
Enter 5 elements: 12 45 7 23 9
Sum = 96
Average = 19.20
*/


// Q3. WAP to find the smallest and largest element in an array.

#include <stdio.h>
int main()
{
    int arr[50], n, i, small, large;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    small = arr[0];
    large = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
        if (arr[i] > large)
            large = arr[i];
    }

    printf("Smallest = %d\n", small);
    printf("Largest = %d", large);
    return 0;
}
/*
OUTPUT:
Enter size: 5
Enter 5 elements: 12 45 7 23 9
Smallest = 7
Largest = 45
*/


// Q4. WAP to merge two arrays into a third array.

#include <stdio.h>
int main()
{
    int a[25], b[25], c[50], n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
/*
OUTPUT:
Enter size of first array: 3
Enter 3 elements: 1 3 5
Enter size of second array: 4
Enter 4 elements: 2 4 6 8
Merged array: 1 3 5 2 4 6 8
*/


// Q5. WAP to count the frequency of each element in an array.

#include <stdio.h>
int main()
{
    int arr[50], n, i, j, count, seen;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        seen = 0;
        for (j = 0; j < i; j++) // check if already counted
        {
            if (arr[i] == arr[j])
                seen = 1;
        }

        if (seen == 0)
        {
            count = 0;
            for (j = 0; j < n; j++)
            {
                if (arr[j] == arr[i])
                    count++;
            }
            printf("%d occurs %d time(s)\n", arr[i], count);
        }
    }
    return 0;
}
/*
OUTPUT:
Enter size: 8
Enter 8 elements: 1 2 2 3 1 4 2 5
1 occurs 2 time(s)
2 occurs 3 time(s)
3 occurs 1 time(s)
4 occurs 1 time(s)
5 occurs 1 time(s)
*/


// Q6. WAP to perform linear search in a given array.

#include <stdio.h>
int main()
{
    int arr[50], n, i, key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Element not found");
    return 0;
}
/*
OUTPUT:
Enter size: 5
Enter 5 elements: 12 45 7 23 9
Enter element to search: 23
Element found at position 4
*/


// Q7. WAP to perform binary search in a given array.

#include <stdio.h>
int main()
{
    int arr[50], n, i, key, low, high, mid, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found == 0)
        printf("Element not found");
    return 0;
}
/*
OUTPUT:
Enter size: 6
Enter 6 elements in ascending order: 5 12 18 27 33 41
Enter element to search: 27
Element found at position 4
*/


// Q8. WAP to insert an element into an existing array at any given position.

#include <stdio.h>
int main()
{
    int arr[50], n, i, pos, elem;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &elem);
    printf("Enter position: ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--) // shift elements to the right
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = elem;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*
OUTPUT:
Enter size: 5
Enter 5 elements: 10 20 30 40 50
Enter element to insert: 25
Enter position: 3
Array after insertion: 10 20 25 30 40 50
*/


// Q9. WAP to delete an element into an existing array at any given position.

#include <stdio.h>
int main()
{
    int arr[50], n, i, pos;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++) // shift elements to the left
    {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*
OUTPUT:
Enter size: 5
Enter 5 elements: 10 20 30 40 50
Enter position to delete: 2
Array after deletion: 10 30 40 50
*/


// Q10. WAP to search a particular element and delete it from the array.

#include <stdio.h>
int main()
{
    int arr[50], n, i, key, pos = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("Element not found");
    else
    {
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
/*
OUTPUT:
Enter size: 5
Enter 5 elements: 10 20 30 40 50
Enter element to delete: 30
Array after deletion: 10 20 40 50
*/