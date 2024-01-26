#include <stdio.h>
#include <stdbool.h> // this header file is for boolean values

// LOOPS
// if you want to print something forever use a while loop because a while loop expects a boolean expression which is a true or false value

int main(void) {
    int counter = 3;

    // while loop
    while (counter > 0) {
        printf("meow\n");
        counter--;
    }

    // for loop
    for(int count = 0; count <= 10; count++) {
        printf("meowing\n");
    }

    while (true) {
        printf("infinite loop\n");
    }
}