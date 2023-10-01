The program must accept a string S as the input. The program must print the count of each character in the string S respective of their case in alphabetical order as the output.
Note: The alphabets in the output contains the uppercase alphabets followed by the lowercase alphabets.

Boundary Condition(s):
2 <= Length of S <= 100

Input Format:
The first line contains the string S.

Output Format:
The first line contains the alphabet followed by it's count for each alphabet in S separated by a space.

Example Input/Output 1:
Input:
Apple

Output:
A1 e1 l1 p2

Example Input/Output 2:
Input:
Eagle

Output:
E1 a1 e1 g1 l1

Example Input/Output 3:
Input:
abcdDCBA

Output:
A1 B1 C1 D1 a1 b1 c1 d1


#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int count[52] = {0}; // Initialize an array to store the count of characters (26 for uppercase + 26 for lowercase)

    printf("Enter a string: ");
    scanf("%s", S);

    int len = strlen(S);

    for (int i = 0; i < len; i++) {
        char c = S[i];
        if (c >= 'A' && c <= 'Z') {
            count[c - 'A']++; // Increment count for uppercase alphabet
        } else if (c >= 'a' && c <= 'z') {
            count[c - 'a' + 26]++; // Increment count for lowercase alphabet
        }
    }

    printf("Character count in alphabetical order:\n");

    for (char c = 'A'; c <= 'Z'; c++) {
        if (count[c - 'A'] > 0) {
            printf("%c%d ", c, count[c - 'A']); // Print uppercase alphabet and its count
        }
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (count[c - 'a' + 26] > 0) {
            printf("%c%d ", c, count[c - 'a' + 26]); // Print lowercase alphabet and its count
        }
    }

    return 0;
}




