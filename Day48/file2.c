#include <stdio.h>

int main() {
char str[200];
int i = 0, j, start;

printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);

while (str[i] != '\0') {
while (str[i] == ' ') {
i++;
}
start = i;
while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
i++;
}
j = i - 1;
while (start < j) {
char temp = str[start];
str[start] = str[j];
str[j] = temp;
start++;
j--;
}
}

printf("Reversed words: %s", str);
return 0;
}
