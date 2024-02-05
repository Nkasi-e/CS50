#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[250];
    printf("Before: ");
    scanf("%s", &s);
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++) {

        // CONVERTING IT TO UPPERCASE MANUALLY

    //     if (s[i] >= 'a' && s[i] <= 'z') {
    //         printf("%c", s[i] - 32);
    //   } else {
    //     printf("%c", s[i]);
    //   }

      // CONVERTING IT USING THE ctype library

    //   if (islower(s[i])) {
    //     printf("%c", toupper(s[i]));
    //   } else {
    //     printf("%c", s[i]);
    //   }

    // FEWER LINE OF CODE TO ACHEIVE THE SAME ACTION BY OMMITTING THE IF STATEMENT
    printf("%c", toupper(s[i]));
    }
    printf("\n");
}