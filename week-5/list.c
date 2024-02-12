#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *list = malloc(3 * sizeof(int));

    if (list == NULL) {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //.... Reallocating the previous with realloc method... Growing the previous array size.. realloc() automatically frees the previous memory for you

    int *tmp = realloc(list, 4 * sizeof(int)); // realloc tries to reallocate memory, it takes in the list it wants to grow and allocate the new memory to it
    if (tmp == NULL) {
        free(list); // freeing the list memory to avoid memory leaks
        return 1;
    }

    // copying from old to new ( list -> tmp )

    // for (int i = 0; i < 3; i++) {
    //     tmp[i] = list[i];
    // }
    list = tmp;

    list[3] = 4;

    // free(list);

    // list = tmp;

    for (int i = 0; i < 4; i++) {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}

// Anytime you want to use the * and . symbol together, you can use "->", that is to go somewhere and look into the address