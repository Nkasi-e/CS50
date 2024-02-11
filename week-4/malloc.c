#include <stdio.h>
#include <stdlib.h> // to have access to malloc in C
#include <string.h>
#include <ctype.h>

/**
 * malloc - malloc is for memory allocation, it's a function that you can use to ask the OS for some number of bytes or free space, it returns the address of the first byte of memory if found free for you... unlike a string it is not null terminated, and it is upto yo to manage the memory malloc gives to you
 * 
 * free - Free does the opposite, when you're done wit some chunk of memory you can free it by passing in that same address to your OS that you're done with it
*/

int main(void) {
    char *s;
    printf("s: ");
    scanf("%s", &s);

    if (s == NULL) {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);

    if (t == NULL) {
        return 1;
    }

    // for (int i = 0, n = strlen(s) + 1; i < n; i++) {
    //     t[i] = s[i];
    // }
    strcpy(t, s); // to copy string - t is the destination you're copying to and s is the source

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free - Freeing the memory you asked for after use, note that it is a good practice in C to always free the memory after use.

    free(t);

    return 0;
}