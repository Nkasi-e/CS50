#include <stdio.h>
#include <stdlib.h>




// Use valgrind to detect error
int main(void) {

    int *x = malloc(3 * sizeof(int));
    if (x = NULL) {
        return 1;
    }
    x[0] = 45;
    x[1] = 57;
    x[2] = 48;
    free(x); // Always free memory to avoid memory leaks
    return 0;
}

/*
* Heap memory - This is where malloc grabs memory from, there's nothing in the heap is just the chunk of free space
*
* Stack memory - the stck is where function, variables and arguments are stored temporaly
*
* Garbage values - the garbage values are unused values or var
*/