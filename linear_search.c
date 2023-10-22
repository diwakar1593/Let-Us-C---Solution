#include <stdio.h>

int main() {
    int arr[100], n, i, key;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Key found at index %d\n", i);
            break;
        }
    }

    if(i == n) {
        printf("Key not found\n");
    }

    return 0;
}