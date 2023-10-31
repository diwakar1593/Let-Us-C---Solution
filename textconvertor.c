c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertToUpper(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

void convertToLower(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char text[1000];
    char choice;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    printf("Choose the conversion:\n");
    printf("1. Uppercase\n");
    printf("2. Lowercase\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            convertToUpper(text);
            printf("Converted text to uppercase: %s", text);
            break;
        case '2':
            convertToLower(text);
            printf("Converted text to lowercase: %s", text);
            break;
        default:
            printf("Invalid choice. Please choose either 1 or 2.");
            break;
    }

    return 0;
}