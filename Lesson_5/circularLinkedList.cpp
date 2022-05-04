#include <stdio.h>
#include <stdlib.h>

                    
struct n{
    int data;
    n * next;
};
typedef n node;

void printList(node*r){
    node *iter = r;

    printf("%d ",iter->data);
    iter = iter->next;

    while(iter != r){
        printf("%d ",iter->data);
        iter = iter->next;
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
        r->next = r;
        r->data = x;
        return r;
    }

    if (r->data >x){    //If which added variable smaller than first variable situtaion. Root will change.
            node* temp=(node*)malloc(sizeof(node));
            temp->data = x;
            temp->next = r;
            node* iter =r;

            while(iter->next != r){
                iter = iter->next;
            }
            iter->next = temp;
            return temp;
     }

    node*iter = r;
    while (iter->next != r && iter->next->data <x)
    {
        iter = iter->next;
    }
    node*temp = (node*)malloc(sizeof(node));
    temp->next = iter->next;
    iter->next = temp;
    temp->data=x;
    return r;
}

node* removeVariable(node*r, int x){
    node* temp;
    node* iter = r;

    if(r->data == x ){
        while (iter->next != r)
        {
            iter = iter->next;
        }
        
        iter->next = r->next;
        free(r);
        return iter->next;
    }
    while(iter->next != r && iter->next->data != x){
        iter = iter->next;
    }
    if(iter->next == r){
        printf("We did not find the %d.\n",x);
        return r;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
    return r;

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

    root = removeVariable(root,2222);
    root = removeVariable(root,222);
    root = removeVariable(root,1809);
    
    printList(root);

    root = addVariableInLine(root,1809);
    
    printList(root);
}