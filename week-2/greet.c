#include <stdio.h>



// COmmand Line Arguments

int main(int argc, char argv[]) {
    // printf("hello %s\n", argv[1]);

    if (argc !=2) {
        printf("Missing command line arguments\n");
        return 1;
    } else {
        printf("hello %s\n", argv[1]);
        return 0;
    }
}