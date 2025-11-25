#include <stdio.h>

int main() {
FILE *f;
char line[200];

f = fopen("info.txt","r");

if(f == NULL) {
printf("Could not open file");
return 0;
}

while(fgets(line, 200, f) != NULL)
printf("%s", line);

fclose(f);

return 0;
}
