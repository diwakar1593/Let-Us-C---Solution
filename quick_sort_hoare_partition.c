// date-29-07-2023
// author-akshat khatri
// implementing quick sort using hoare's partition

#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
int partition(int[], int, int);
void quick_sort(int[], int, int);
void print_array(int[], int);
int main();

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // in hoare's partition pivot is initialized as arr[low]
    int i = low - 1;      // first index to take care of elements smaller than pivot
    int j = high + 1;     // index to take care of elements larger than pivot

    while (1) // the loop will not terminate and will run endlessly
    {
        do
        {
            i++;
        } while (arr[i] < pivot); // the 'i' will increment until element greater than pivot is found

        do
        {
            j--;
        } while (arr[j] > pivot); // the j will decrement until element smaller than pivot is found

        if (i >= j)
        {
            return j;
        }
        else
        {
            swap(&arr[i], &arr[j]); // swap when found
        }
    }
}
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi);
        quick_sort(arr, pi + 1, high); // recursive calls to quick sort
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;

    printf("enter the size of the array\n");
    scanf("%d", &size);

    int *array_to_be_sorted = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("enter the %dth element\n", i);
        scanf("%d", &array_to_be_sorted[i]);
    }
    printf("\n");

    printf("the array you entered is \n");
    print_array(array_to_be_sorted, size);

    printf("array after sorting is\n");
    quick_sort(array_to_be_sorted, 0, size - 1);
    print_array(array_to_be_sorted, size);

    free(array_to_be_sorted);
    return 0;
}
