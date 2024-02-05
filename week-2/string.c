#include <stdio.h>


// string is an array of characters under the hood 
int main(void) {
    // char c1 = 'H';
    // char c2 = 'L';
    // char c3 = 'I';
    char s[3] = "HLI";

    // printf("%c%c%c\n", c1, c2, c3);
    //  printf("%i %i %c\n", c1, c2, c3);
    printf("%s\n", s);
    printf("%c\n", s[0]);
    printf("%c%c%c\n", s[0], s[1], s[2]);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}