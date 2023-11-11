#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    int arr[m][n], newArr[m][n];
    printf("Enter array elements:\n");
    for (int i = 0; i < m; i++) {
        printf("Enter Row %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Input Array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%02d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            newArr[i][n - 1 - j] = arr[i][j];
        }
    }
    printf("Mirror Image of Array with all digits reversed:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int num = newArr[i][j];
            int reversedNum = 0;
            while (num != 0) {
                int digit = num % 10;
                reversedNum = reversedNum * 10 + digit;
                num /= 10;
            }
            printf("%02d\t", reversedNum);
        }
        printf("\n");
    }
    return 0;
}

