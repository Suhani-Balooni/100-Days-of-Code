#include <stdio.h>
int main()
{
int a;
int b;
int sum , diff , quot , prod;
printf("Enter first number:");
scanf("%d", &a);

printf("Enter second number:");
scanf("%d", &b);

sum =  a + b;
diff = a - b;
prod = a * b;

if ( b != 0)
{
quot = a / b ;
printf("quotient : %d\n", quot);
}
else
{
printf("division isn't possible. \n");
}
printf("sum: %d\n", sum);
printf("diff: %d\n", diff);
printf("prod: %d\n", prod);

return 0;
}
