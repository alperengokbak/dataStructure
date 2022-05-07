#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(){

    node* tree = NULL;

    tree = add(tree,56);
    tree = add(tree,200);
    tree = add(tree,26);
    tree = add(tree,190);
    tree = add(tree,213);
    tree = add(tree,18);
    tree = add(tree,28);
    tree = add(tree,12);
    tree = add(tree,24);
    tree = add(tree,27);
    traversalLRR(tree);
    printf("\n");
    // traversalRRL(tree);
    // printf("Result of Searched: %d\n",search(tree,100));
    // printf("Result of Searched: %d\n",search(tree,18));
    // printf("Result of Searched: %d\n",search(tree,27));
    // printf("max = %d min = %d",max(tree),min(tree));
    tree = deletee(tree,190);
    traversalLRR(tree);
    printf("\n");
    tree = deletee(tree,56);
    traversalLRR(tree);
}