#include <stdio.h>

/**
 * For Binary search on linked lists which can also be trees
 * Binary search tree is dynamic and faster with log(n) for a balanced tree but also the price to pay is memory, note that for an unbalanced tree BST can be O(n)
*/

// For binary search tree
typedef struct node {
    int number;
    struct node *left;
    struct node *right;
}
node;



// dummy search function.. Note that this is a recursive function, which means it calls itself
bool search(node *tree, int number) {
    if (tree == NULL) {
        return false;
    } 
    else if (number < tree->number) {
        return search(tree->left, number);
    } 
    else if (number > tree->number) {
        return search(tree->right, number);
    }
    else {
        return true;
    }
}
