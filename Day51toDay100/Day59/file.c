#include <stdio.h>

int main() {
int n,k,i;
long long sum=0,max;

printf("Enter size: ");
scanf("%d",&n);

int arr[n];

printf("Enter array: ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

printf("Enter k: ");
scanf("%d",&k);

if(k>n || k<=0) {
printf("Invalid k");
printf("\nMaximum sum: 0");
return 0;
}

for(i=0;i<k;i++)
sum=sum+arr[i];

max=sum;

for(i=k;i<n;i++) {
sum=sum+arr[i];
sum=sum-arr[i-k];
if(sum>max)
max=sum;
}

printf("Maximum sum: %lld",max);
return 0;
}
