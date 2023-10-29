#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001], s2[1001];
    scanf("%s %s", s1, s2);
    int n = strlen(s1);
    int L[n+1][n+1];
    int z = 0;
    char ret[1001];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                L[i][j] = 0;
            } else if (s1[i-1] == s2[j-1] && i == j) {
                L[i][j] = L[i-1][j-1] + 1;
                if (L[i][j] > z) {
                    z = L[i][j];
                    strncpy(ret, s1+i-z, z);
                    ret[z] = '\0';
                }
            } else {
                L[i][j] = 0;
            }
        }
    }
    printf("%s\n", ret);
    return 0;
}
