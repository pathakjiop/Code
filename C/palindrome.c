#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome or not
int isPalindrome(char str[]) {
    int left = 0;            // Index of the first character in the string that is imputed by the user
    int right = strlen(str) - 1;  // Index of the last character in the string (including the terminating null terminator character)

    while (left < right) {
        // If characters at current indices are not equal, it's not a palindrome 
        if (str[left] != str[right]) {
            return 0;  // Not a palindrome string 
        }

        // Move to the next pair of characters
        left++;
        right--;
    }

    return 1;  // The string is a palindrome
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is used for simplicity. It is not recommended due to buffer overflow risk.

    // Check if the entered string is a palindrome 
    if (isPalindrome(str) == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
