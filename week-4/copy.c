#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char *s;
    printf("s: ");
    scanf("%s", &s);

    char *t = s;

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}