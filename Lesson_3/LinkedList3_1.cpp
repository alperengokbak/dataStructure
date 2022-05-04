#include <stdio.h>
#include <stdlib.h>

                    //Added variable but there is a different rule,sequentially
struct n{
    int data;
    n * next;
};
typedef n node;

void printList(node*r){
    int i = 0;
    while(r != NULL){
        i++;
        printf("%d.variable:%d\n",i,r->data);
        r=r->next;
    } 
}

node* addVariableInLine(node*r,int x){
    if(r == NULL){      // If the link list is empty.
        r = (node*)malloc(sizeof(node));
        r->next = NULL;
        r->data = x;
        return r;
    }

    if (r->data >x){    //If which added variable smaller than first variable situtaion. Root will change.
            node* temp=(node*)malloc(sizeof(node));
            temp->data = x;
            temp->next = r;
            r = temp;
            return r;
     }

    node*iter = r;
    while (iter->next != NULL && iter->next->data <x)
    {
        iter = iter->next;
    }
    node*temp = (node*)malloc(sizeof(node));
    temp->next = iter->next;
    iter->next = temp;
    temp->data=x;
    return r;
}

void addVariable(node*r,int x){
    while(r->next != NULL){
        r=r->next;
    }
    r->next = (node*)malloc(sizeof(node));
    r->next->data = x; 
    r->next->next = NULL;
}

int main(){

    node* root;
    root = NULL;

    root = addVariableInLine(root,2507);
    root = addVariableInLine(root,1809);
    root = addVariableInLine(root,2222);
    root = addVariableInLine(root,2023);
    root = addVariableInLine(root,3008);
    printList(root);
}