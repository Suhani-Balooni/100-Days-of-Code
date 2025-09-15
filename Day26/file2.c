#include <stdio.h>

int main() {
int r, c;
for(r = 1; r <= 5; r += 2)
{
for(c = 1; c <= r; c++)
{
printf("*\n");
}
printf("\n");
}
for (r = 3; r >= 1; r -= 2)
{
for (c = 1; c <= r; c++)
{
printf("*\n");
}
printf("\n");
}
return 0;
}
