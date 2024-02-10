#include <stdio.h>
#include <string.h>

int main(void) {

    // Linear search with integers
    // int numbers[] = {20, 500, 10, 5, 100, 1, 50}; 

    // int n;
    // printf("Number: ");
    // scanf("%i", &n);
    // for (int i = 0; i < 7; i++) {
    //     if (numbers[i] == n) {
    //         printf("Found\n");
    //         return 0;
    //     }
    // }
    // printf("Not found\n");
    // return 1;

    // LINEAR SEARCH WITH STRINGS
    char** strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "lobster"};
    char s[250];
    printf("String: ");
    scanf("%s", &s);
    for (char i = 0; i < strlen(strings); i++) {
        if (strcmp(strings[i], s) == 0) {
                printf("Found\n");
                return 0;
        }
    }
    printf("Not found\n");
    return 1;

}