#include <stdio.h>

int main() {
FILE *f;
char filename[100];
char line[200];

printf("Enter filename: ");
scanf("%s", filename);

f = fopen(filename, "r");

if(f == NULL) {
printf("File does not exist");
return 0;
}

while(fgets(line, 200, f) != NULL)
printf("%s", line);

fclose(f);

return 0;
}
