#include <stdio.h>
//Ask the user to enter their firstName & print it back to them.
//Also try this with their full name.
int main() {
    char firstName[100];
    scanf("%s", firstName);
    printf("Your name is:%s", firstName);

    return 0;
}