#include <stdio.h>

int main() {
int n, c, r;
printf("Enter the number of rows: ");
scanf("%d", &n);
for (c = 1; c <= n; c++) 
{
for (r = 1; r <= c; r++)
{
printf("%d", r);
}
        printf("\n");
    }

    return 0;
}
