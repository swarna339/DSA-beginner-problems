#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j;

    // Read the input string
    scanf("%[^\n]s", str);

    // Find the length of the string
    len = strlen(str);

    // Traverse the string from the end
    for (i = len - 1; i >= 0; i--) {
        // If a space is encountered, print the word in reverse order
        if (str[i] == ' ') {
            for (j = i + 1; j < len && str[j] != ' '; j++) {
                printf("%c", str[j]);
            }
            printf(" ");
        }
    }

    // Print the first word
    for (i = 0; i < len && str[i] != ' '; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
