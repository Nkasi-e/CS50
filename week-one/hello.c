#include <stdio.h> // This header file declares the functions in C to run

int main(void) 
{
    char character;
    char name[30];
    printf("Enter a character\n");
    printf("Please enter your names?\n ");
    scanf("%c", &character); // scanf() is used to take in an input from the user, scanf() is for a single word while fgets() is for multiple words
    fgets(name, sizeof(name), stdin);
    printf("You entered a character %c\n", character);
    printf("Your name is %s we're are happy to you join us\n", name);
    return 0;
} 