#include <stdio.h>
#include <stdlib.h>

                    // Adding variable and transform basic code form
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
}