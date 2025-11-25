#include <stdio.h>

int main() {
FILE *f;
char text[200];

f = fopen("info.txt","a");

if(f == NULL) {
printf("Could not open file");
return 0;
}

printf("Enter text to append: ");
scanf(" %[^\n]", text);

fprintf(f, "%s\n", text);

fclose(f);

printf("Text appended successfully");

return 0;
}

