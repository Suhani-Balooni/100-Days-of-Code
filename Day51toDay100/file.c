#include <stdio.h>

int main() {
int n,k,i,j,max;

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
return 0;
}

for(i=0;i<=n-k;i++) {
max=arr[i];
for(j=i;j<i+k;j++) {
if(arr[j]>max)
max=arr[j];
}
printf("%d",max);
if(i<n-k) printf(" ");
}

return 0;
}

