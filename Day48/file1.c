#include <stdio.h>

int main() {
int i, j, k, len1 = 0, len2 = 0, isRotation = 0;
char s1[100], s2[100];

printf("Enter first string: ");
scanf("%s", s1);
printf("Enter second string: ");
scanf("%s", s2);

for (i = 0; s1[i] != '\0'; i++)
len1++;
for (i = 0; s2[i] != '\0'; i++)
len2++;

if (len1 != len2) {
printf("Not a rotation.\n");
return 0;
}

for (i = 0; i < len1; i++) {
int match = 1;
for (j = 0; j < len1; j++) {
k = (i + j) % len1;
if (s1[k] != s2[j]) {
match = 0;
break;
}
}
if (match) {
isRotation = 1;
break;
}
}

if (isRotation) {
printf("Rotation.\n");
}
else {
printf("Not a rotation.\n");
}
return 0;
}

