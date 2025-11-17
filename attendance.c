#include <stdio.h>

int main() { float attendance;


printf("Enter your attendance percentage: ");
scanf("%f", &attendance);


if (attendance < 75) {
    printf("tumchya jivnach vatol zalay\n");
} 
else {
    printf("tumchya jivnach vatol ny zalay.\n");
 }
return 0;
 }
