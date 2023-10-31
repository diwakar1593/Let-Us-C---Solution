#include <stdio.h>
#include <stdbool>
#include <string.h>
#include <ctype.h>

bool is_palindrome(const char *str) {
    int left = 0, right = strlen(str) - 1;
    while (left < right)
        while (!isalpha(str[left])) left++;
        while (!isalpha(str[right])) right--;
        if (tolower(str[left++]) != tolower(str[right--])) return false;
    return true;
}

int main() {
    char input[100];
    printf("Enter a sentence or word: ");
    fgets(input, sizeof(input), stdin);
    printf(is_palindrome(input) ? "Palindrome\n" : "Not a palindrome\n");
    return 0;
}
