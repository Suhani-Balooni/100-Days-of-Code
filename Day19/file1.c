#include<stdio.h>
int main(void)
{
int num;
int sum = 0;
int digit;
printf("Enter the number:");
scanf("%d", &num);

if(num < 0)
{num = -num;
}
while(num > 0)
{
digit = num % 10;
sum += digit;
num = num / 10;
}
printf("Sum:%d\num", sum);
}
