//BINARY SEARCH
#include <stdio.h>
int main()
{
    int arr[10], n, i, x, ub, lb, mid, flag = 0;
    printf("enter the no of elements in array:\n");
    scanf("%d", &n);
    printf("enter the elements of array in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to find:\n");
    scanf("%d", &x);
    /* Binary Search  logic */
    lb = 0;
    ub = n - 1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (x == arr[mid])
        {
            flag = 1;
            break;
        }
        else if (x < arr[mid])
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    if (flag == 0)
    {
        printf("value not found");
    }
    else
    {
        printf("%d value found at %d position", x, mid + 1);
    }

    return 0;
}
