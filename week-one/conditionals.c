#include <stdio.h>

// A program that compares 2 values that the human input

int main(void) {
    int num;
    printf("Please enter a number\n");
    scanf("%i", &num);

    if (num < 18) {
        printf("You're too young for this content\n");
    } else if (num > 18) {
        printf("You're old enough for this content\n");
    } else {
        printf("You're 18 years old\n");
    }
}