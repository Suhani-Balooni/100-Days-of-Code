#include <stdio.h>
int main()
{
int a;
int b;
int perimeter, area ;

printf("enter length:");
scanf("%d",&a);

printf("enter breadth:");
scanf("%d", &b);

area = a * b;
perimeter = 2 * ( a + b );

printf("Area: %d\n", area );
printf("Perimeter; %d\n", perimeter);

return 0;
}

