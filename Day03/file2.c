#include <stdio.h>
int main()
{
int a;
int b;
int x;

printf(" Enter first number:");
scanf ("%d", &a);

printf("Enter a second number:");
scanf ("%d", &b);

printf("before swapping: a = %d, b = %d \n", a,b );

x = a ;
a = b ;
b = x ;

printf("after swapping: a = %d, b = %d\n", a, b);

return 0;
}
