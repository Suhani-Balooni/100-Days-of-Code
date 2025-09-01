#include <stdio.h>

int main() {
    // Command: Write a program to print numbers from 1 to n.
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
