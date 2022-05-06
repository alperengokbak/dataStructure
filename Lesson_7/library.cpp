#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void printList(node*r){
    while(r != NULL){
        printf("%d ",r->data);
        r = r->next;
    } 
    printf("\n");
}

void addVariable(node*r,int x){
    node*iter =r;

    while(iter->next != r){
        iter = iter->next;
    }
    iter->next = (node*)malloc(sizeof(node));
    iter->next->data = x; 
    iter->next->next = r;
}

node* addVariableInLine(node*r,int x){
    if(r == NULL){      // If the link list is empty.
        r = (node*)malloc(sizeof(node));
        r->next = NULL;
        r->prev = NULL;
        r->data = x;
        return r;
    }

    if (r->data >x){    //If which added variable smaller than first variable situtaion. Root will change.
            node* temp=(node*)malloc(sizeof(node));
            temp->data = x;
            temp->next = r;
            r->prev = temp;
            return temp;
     }

    node*iter = r;
    while (iter->next != NULL && iter->next->data <x)
    {
        iter = iter->next;
    }
    node*temp = (node*)malloc(sizeof(node));
    temp->next = iter->next;
    iter->next = temp;
    temp->prev = iter;
    if(temp->next != NULL){
        temp->next->prev = temp;
    }
    temp->data=x;
    return r;
}

node* removeVariable(node*r, int x){
    node* temp;
    node* iter = r;

    if(r->data == x ){
        temp = r;
        r = r->next;
        free(temp);
        return r;
    }
    while(iter->next != NULL && iter->next->data != x){
        iter = iter->next;
    }
    if(iter->next == NULL){
        printf("We did not find the %d.\n",x);
        return r;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
    if (iter->next != NULL)
    {
        iter->next->prev = iter;
    }
    return r;
}