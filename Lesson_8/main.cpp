#include <stdio.h>
#include <stdlib.h>
#include "stackArray.h"

int main(){

    stack *s1 = def();
    stack *s2 = def();
    
    for(int i = 0;i<10;i++){
        push(i*10,s1);
    }
    printArray(s1);
    for(int i = 0;i<10;i++){
        push(pop(s1),s2);
    }
    printArray(s1);
    printArray(s2);
}