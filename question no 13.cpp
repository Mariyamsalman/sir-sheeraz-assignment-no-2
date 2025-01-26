#include <stdio.h>
#include <string.h>

void analyzeString(const char *str) {
    int vowels = 0, consonants = 0, upperCase = 0, lowerCase = 0;
    int specialCharacters = 0, words = 0, digits = 0;
    int inWord = 0; // Flag to check if inside a word

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for uppercase and lowercase
        if (ch >= 'A' && ch <= 'Z') {
            upperCase++;
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (ch >= 'a' && ch <= 'z') {
            lowerCase++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } 
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        } 
        // Check for spaces (end of a word)
        else if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } 
        // Otherwise, it's a special character
        else {
            specialCharacters++;
        }

        // Mark the beginning of a word
        if (ch != ' ' && ch != '\t' && ch != '\n' && !inWord) {
            inWord = 1;
        }
    }

    // Count the last word if the string doesn't end with a space
    if (inWord) {
        words++;
    }

    // Print the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Uppercase Letters: %d\n", upperCase);
    printf("Lowercase Letters: %d\n", lowerCase);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialCharacters);
    printf("Words: %d\n", words);
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    analyzeString(str);

    return 0;
}

