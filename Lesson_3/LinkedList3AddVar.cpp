#include <stdio.h>
#include <stdlib.h>

                    // Add variable with the fucntion
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
    void addVariable(node*r,int x){
        while(r->next != NULL){
            r=r->next;
        }
        r->next = (node*)malloc(sizeof(node));
        r->next->data = x; 
        r->next->next = NULL;
    }

int main(){

    node*root;
    root = (node*)malloc(sizeof(node));
    root ->data = 1809;
    root->next=NULL;

    for(int i=0;i<5;i++){
        addVariable(root,i*2);
    }
    printList(root);
    node * iter = root;
    for(int i= 0; i<= 3; i++){
        iter = iter->next;
    }
    node* temp=(node*)malloc(sizeof(node));
    temp->next=iter->next;
    iter->next = temp;
    temp->data = 2507;
    printList(root);
}