#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[1000];
    scanf("%s", S);

    int count[26] = {0};

    for (int i = 0; i < strlen(S); i++) {
        if (isalpha(S[i])) {
            count[tolower(S[i]) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("%c %d\n", i + 'a', count[i]);
        }
    }
