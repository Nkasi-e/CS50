#include <stdio.h>


// The functions placed here tells the compiler this is going to be useful so as to allow it run instead of taking the main fn to the botton of code

int get_size(void);
void print_grid(int size);

int main(void) {

    // Get size of grid
    int n = get_size();
  
    // Print grid of blocks
    print_grid(n);

}

int get_size(void) {
    int n;
    do {
        printf("Enter size ");
        scanf("%i", &n);
    } while (n < 1);

    return 1;
}

void print_grid(int size) { // void means it has no return value
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("#");
        }
        printf("\n");
    }
    
} 