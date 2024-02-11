#include <stdio.h>


/**
 * The "&" operator allows us to get the address of a piece of data in memory.
 * The "*" otherwise known as the dereference operator does the opposite allows you to go to a specific address
 * 
 * "%p" allows for the printing of the address of a variable
 * 
 * 
 * Pointers - A pointer is a variable that contains the address of some value in memory or and address of something in the computer's memory
 * 
 * Strings are the address of the first character in the sequence of characters that are used
*/

// how to declare a string in C... you use dereference operator (*) e.g char *name = "foo";


typedef char *string; 

int main(void) {
    int n = 50;

    printf("%p\n", &n);

    // pointer with the *
    int *p = &n;
    printf("Pointer: %p\n", p);

    string s = "Hello!";

    string *b = &s;
 
    printf("%s\n", *b); // dereference with the *
    printf("%p\n", s); // prints the address

    printf("%p\n", s[0]); // prints the address of the first character of the string
    printf("%p\n", s[1]);
    printf("%p\n", s[2]);
    printf("%p\n", s[3]);
    printf("%p\n", s[4]);
    printf("%p\n", s[5]);

    printf("Another\n");

    printf("%p\n", s);
    printf("%p\n", &s[0]); // prints the address string
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
    printf("%p\n", &s[5]);

    //POINTER ARITHMETIC
    printf("Pointer arithmetic\n");

    char *m = "HI!";
    printf("%c\n", *m);
    printf("%c\n", *(m+1));
    printf("%c\n", *(m+2)); // This method can be used to poke around your memory to see what is stored in it
    printf("%c\n", *(m+ n-1));
    printf("%c\n", *(m+1000)); // This is an example of poking around your computer's memory
}