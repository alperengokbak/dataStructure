#include <stdio.h>
#include <stdlib.h>
#include "queueArrays.h"

int main(){
    for(int i=0;i<20;i++){
        enque(i*10);
    }
    for(int i=0;i<13;i++){
        printf("%d ",deque());
    }
    clean();
    for(int i=0;i<20;i++){
        enque(i*10);
    }
    for(int i=0;i<30;i++){
        printf("%d ",deque());
    }
}