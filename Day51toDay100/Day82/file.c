#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
enum Light signal;

printf("Enter signal (0=RED, 1=YELLOW, 2=GREEN): ");
scanf("%d", &signal);

if(signal == RED)
printf("Stop");
else if(signal == YELLOW)
printf("Wait");
else if(signal == GREEN)
printf("Go");
else
printf("Invalid signal");

return 0;
}

