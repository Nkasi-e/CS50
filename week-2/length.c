#include <stdio.h>
#include <string.h> // string header

int main(void) {
    char name[256];
    printf("What's your name? ");
    scanf("%s", &name);

    // int n = 0;
    // while (name[n] != '\0') {
    //     n++;
    // }

    // printf("%i\n", n);

    // Using the string header file to get the length of string with strlen() method

    int l = strlen(name);
    printf("%i\n", l);

}