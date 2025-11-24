#include <stdio.h>

int main() {
int n,x=-1,i,sumLeft,sumRight;
printf("Enter n: ");
scanf("%d",&n);

for(i=1;i<=n;i++) {
sumLeft=i*(i+1)/2;
sumRight=(n*(n+1)/2) - ((i-1)*i/2);
if(sumLeft==sumRight) { x=i; break; }
}

printf("Pivot integer: %d",x);
return 0;
}
