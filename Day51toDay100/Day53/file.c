#include <stdio.h>

int main() {
int n,i,left=0,right=0,pivot=-1;

printf("Enter size: ");
scanf("%d",&n);

int arr[n];
printf("Enter array: ");
for(i=0;i<n;i++) scanf("%d",&arr[i]);

for(i=0;i<n;i++) right+=arr[i];

for(i=0;i<n;i++) {
right-=arr[i];
if(left==right) { pivot=i; break; }
left+=arr[i];
}

printf("Pivot index: %d\n",pivot);
return 0;
}

