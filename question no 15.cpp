#include <stdio.h>
#include <string.h>

int main() {
    char str[100], visited[256] = {0};
    int count[256] = {0};

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("The count of each character in the string '%s' is:\n", str);

  
    for (int i = 0; str[i] != '\0'; i++) {
        if (!visited[(unsigned char)str[i]]) {
            printf("%c %d\n", str[i], count[(unsigned char)str[i]]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}

