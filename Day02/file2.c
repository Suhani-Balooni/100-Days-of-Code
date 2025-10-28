#include <stdio.h>
int main()
{
float a;
float circum;
float area;
printf ("Enter a radius:");
scanf ("%f" , &a);

circum = 2 * 3.14 * a;
area = 3.14 * a * a;

printf("Circumference:%f\n", circum);
printf("Area:%f\n", area);

return 0 ;
}
