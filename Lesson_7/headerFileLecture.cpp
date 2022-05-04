#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(){

    node* root;
    root = NULL;

    root = addVariableInLine(root,2507);
    root = addVariableInLine(root,1809);
    root = addVariableInLine(root,2222);
    root = addVariableInLine(root,2023);
    root = addVariableInLine(root,3008);

    printList(root);
    root = removeVariable(root,222);
    printList(root);
    root = removeVariable(root,2222);
    printList(root);
    root = removeVariable(root,1809);
    printList(root);
    root = removeVariable(root,3008);
    printList(root);
}