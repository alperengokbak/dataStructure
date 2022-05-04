#include <stdio.h>
#include <stdlib.h>

                    //Creating linked list with nodes...
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

int main(){
    node*root;
    root=(node*)malloc(sizeof(node));
    root ->data=10;
    root ->next = (node*)malloc(sizeof(node));
    root ->next->data=20;
    root-> next->next = (node*)malloc(sizeof(node));
    root ->next->next->data=30;
    root ->next->next->next = NULL;

    node*iter;
    iter = root;
    // printf("%d\n",iter->data);
    // iter = iter->next;
    // printf("%d\n",iter->data);
    // iter = iter->next;
    // printf("%d",iter->data);
    // iter = root;

    while(iter->next != NULL){
        iter = iter ->next;
    }

    for(int i=0;i<5;i++){
        iter->next= (node*)malloc(sizeof(node));
        iter= iter->next;
        iter->data= i*2;
        iter->next= NULL;
    }
    printList(root);
}