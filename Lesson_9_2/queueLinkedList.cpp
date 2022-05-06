#include <stdio.h>
#include <stdlib.h>
#include "queueLinkedList.h"

node* root = NULL;
node* lastVar = NULL;
void enqueue(int x){
    if(root == NULL){
        root = (node*)malloc(sizeof(node));
        root->data = x;
        root->next = NULL;
        lastVar = root;
    }else{
        lastVar->next = (node*)malloc(sizeof(node));
        lastVar->next->data = x;
        lastVar = lastVar->next;
        lastVar->next = NULL;
    }
}
int dequeue(){
    if(root == NULL){
        printf("LinkedList is empty.");
        return -1;
    }
    int rvalue = root->data;
    node* temp = root;
    root = root->next;
    free(temp);
    return rvalue;
}