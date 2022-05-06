#include <stdio.h>
#include <stdlib.h>
#include "queueLinkedList.h"

int main(){

    for(int i=0;i<10;i++){
        enqueue(i*10);
    }
    for(int i=0;i<5;i++){
        printf("%d ",dequeue());
    }
    for(int i=0;i<5;i++){
        enqueue(i*10);
    }
    for(int i=0;i<5;i++){
        printf("%d ",dequeue());
    }
}