#include <stdio.h>

int main() {
FILE *f;
char name[100];
int roll;
int marks;
int n;
int i;

printf("Enter number of students: ");
scanf("%d", &n);

f = fopen("students.txt", "w");

for(i=0;i<n;i++) {
printf("Enter name: ");
scanf("%s", name);

printf("Enter roll number: ");
scanf("%d", &roll);

printf("Enter marks: ");
scanf("%d", &marks);

fprintf(f, "%s %d %d\n", name, roll, marks);
}

fclose(f);

f = fopen("students.txt", "r");

printf("\nStored Records:\n");

while(fscanf(f, "%s %d %d", name, &roll, &marks) != EOF)
printf("%s %d %d\n", name, roll, marks);

fclose(f);

return 0;
}

