#include <stdio.h>

int main() {
FILE *f;
char name[100];
int age;

f = fopen("info.txt","w");

printf("Enter your name: ");
scanf("%s", name);

printf("Enter your age: ");
scanf("%d", &age);

fprintf(f, "Name: %s\nAge: %d\n", name, age);

fclose(f);

printf("Data successfully saved to info.txt");

return 0;
}
