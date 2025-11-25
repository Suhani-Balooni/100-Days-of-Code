#include <stdio.h>

int main() {
int n,i;
long long curr,max;

printf("Enter size: ");
scanf("%d",&n);

int arr[n];

printf("Enter array: ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

curr=arr[0];
max=arr[0];

for(i=1;i<n;i++) {
if(curr+arr[i] > arr[i])
curr = curr + arr[i];
else
curr = arr[i];

if(curr > max)
max = curr;
}

printf("Maximum sum: %lld",max);
return 0;
}
