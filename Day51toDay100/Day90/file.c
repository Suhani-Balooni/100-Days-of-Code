#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
char name[50];
enum Gender gender;
};

int main() {
struct Person p;

printf("Enter name: ");
scanf("%s", p.name);

printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
scanf("%d", &p.gender);

if(p.gender == MALE)
printf("Gender: MALE");
else if(p.gender == FEMALE)
printf("Gender: FEMALE");
else if(p.gender == OTHER)
printf("Gender: OTHER");
else
printf("Invalid gender");

return 0;
}

