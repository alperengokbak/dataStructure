#include <stdio.h>
#include <stdlib.h>
#include "stackArray.h"

// Stack is running with LIFO logic. Meaning of that is last in First out.

stack* def(){

    stack*s = (stack*)malloc(sizeof(stack));
    s->array = NULL;
    s->size = 2;
    s->top = 0;
    return s;
}

int pop(stack* s){

    if(s->top <= 0 || s->array == NULL){
        printf("Array is empty.");
        return -1;
    }
    if(s->top <= s->size/4){
        int *array2 = (int*)malloc(sizeof(int)*s->size/2);
        for(int i = 0;i<s->top;i++){
            array2[i] = s->array[i];
        }
        free(s->array);
        s->array = array2;
        s->size /= 2;
    }
    return s->array[--s->top];
}

void push(int a,stack* s){

    if(s->array == NULL){
        s->array = (int*)malloc(sizeof(int)*2);
    }
    if(s->top >= s->size-1){
        int *array2 = (int*)malloc(sizeof(int)*s->size*2);
        for(int i = 0;i<s->size;i++){
            array2[i] = s->array[i];
        }
        free(s->array);
        s->array = array2;
        s->size *= 2;
    }
    s->array[s->top++] = a;
}

void printArray(stack *s){
    printf("Size : %d ",s->size);
    for(int i=0;i<s->top;i++){
        printf("%d ",s->array[i]);
    }
}