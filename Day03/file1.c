#include <stdio.h>
int main ()
{
float a;
float b;

printf("Enter temperature in celsius:");
scanf("%f", &a);

b = (a * 9/5) + 32;

printf(" Temperature in Fahrenheit is: %f\n", b);
return 0;
}
