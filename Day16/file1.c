#include<stdio.h>
int main()
{
int n, rev=0;

printf("Enter a number:");
scanf("%d", &n);
 
if (n==0)
{
printf("Binary: 0\n");
return 0;
}
 int temp=n;

while (temp>0)
{
rev= rev * 10 + (temp % 2);
temp= temp/2;
}

printf("Binary:");
while (rev>0)
{
printf("%d", rev % 10);
rev = rev/10;
}
printf("\n");
return 0;
}
