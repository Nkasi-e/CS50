#include <stdio.h>
#include <stdlib.h>

// For linked lists
typedef struct node {
    int number;
    struct node *next;
} 
node;

int main(int argc, char *argv[]) {

    node *list = NULL;
  
  // iterating over the command line arguments
  for (int i = 1; i < argc; i++) {
    int number = atoi(argv[i]); // atoi is an ASCII function that converts strings to integers

    node *n = malloc(sizeof(node));

    // check if n is null
    if (n == NULL) {
        return 1;
    }

    // update the number field of the new node
    n->number = number;
    n->next = NULL;

    // prepending to the list - this points to the existing list
    n->next = list;

    // update the actuaal list to point at the new node
    list = n;

  }


  node *ptr = list; // temporary pointer pointing to the first node in the list

    // iterating over a linked list with a while loop... Point is called ptr for short
  while (ptr != NULL) {
    printf("%i\n", ptr->number);

    // updating pointer to point at the second element in the list
    ptr = ptr->next;
  }

    // iterating over a linked list with a for loop... Point is called ptr for short
//   for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
//     printf("%i\n", ptr->number);
//     ptr = ptr->next;
//   }

  ptr = list;

  // freeing the memory
  while (ptr != NULL) {

    // set a temporary pointer to where you want to go next
    node *next = ptr->next;

    // free the memory
    free(ptr);

    // update pointer to be that next value
    ptr = next;
  }
}
