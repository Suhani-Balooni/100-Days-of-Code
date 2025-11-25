#include <stdio.h>

int main() {
int n,i,j,prod;
scanf("%d",&n);
int nums[n],answer[n];
for(i=0;i<n;i++)
scanf("%d",&nums[i]);
for(i=0;i<n;i++) {
prod=1;
for(j=0;j<n;j++) {
if(j!=i) prod*=nums[j];
}
answer[i]=prod;
}
for(i=0;i<n;i++) {
printf("%d",answer[i]);
if(i<n-1)
printf(" ");
}
return 0;
}
