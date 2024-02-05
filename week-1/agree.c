#include <stdio.h>

int main(void) {
    char c; // double quotes are for strings while single quotes are for char
    printf("do you agree? \n");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y') {
        printf("Agreed.\n");
    } else if (c == 'n' || c == 'N') {
        printf("Not agreed.\n");
    } else {
        printf("Input not correct\n");
    }
}