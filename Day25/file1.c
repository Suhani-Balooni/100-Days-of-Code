#include <stdio.h>
int main()
{
int n, c, r;
printf("Enter the number of rows:");
scanf("%d", &n);

for (c = n; c>=1; c--)
{
for (r = 1; r<= c; r++)
{
printf("*");
}
printf("\n");
}
return 0;
}
