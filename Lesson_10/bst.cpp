#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

node* add(node* tree, int x){
    if(tree == NULL){
        node* root = (node*)malloc(sizeof(node));
        root->left = NULL;
        root->right = NULL;
        root->data = x;
        return root;
    }

    if(tree->data < x){
        tree->right = add(tree->right,x);
        return tree;
    }
    tree->left = add(tree->left,x);
    return tree;
}
int max(node* tree){
    while(tree->right != NULL){
        tree = tree->right;
    }
    return tree->data;
}
int min(node* tree){
    while(tree->left != NULL){
        tree = tree->left;
    }
    return tree->data;
}
void traversalLRR(node*tree){
    if(tree == NULL){
        return;
    }
    traversalLRR(tree->left);
    printf("%d ",tree->data);
    traversalLRR(tree->right);
}
void traversalRRL(node*tree){
    if(tree == NULL){
        return;
    }
    traversalRRL(tree->right);
    printf("%d ",tree->data);
    traversalRRL(tree->left);
}
int search(node*tree, int searched){
    if(tree == NULL){
        return -1;
    }
    if(tree->data == searched){
        return 1;
    }
    if(search(tree->right, searched) == 1){
        return 1;
    }
    if(search(tree->left, searched) == 1){
        return 1;
    }
    return -1;
}
node* deletee(node* tree, int searched){
    if(tree == NULL){
        return NULL;
    }
    if(tree->data == searched){
        if(tree->left == NULL && tree->right == NULL){
            return NULL;
        }
        if(tree->right != NULL){
            tree->data = min(tree->right);
            tree->right = deletee(tree->right, min(tree->right));
            return tree;
        }

        tree->data = max(tree->left);
        tree->left = deletee(tree->left, max(tree->left));
        return tree;
    }
    if(tree->data < searched){
            tree->right = deletee(tree->right,searched);
            return tree;
        }
        tree->left = deletee(tree->left,searched);
        return tree;
}
