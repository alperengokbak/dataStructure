#include <stdio.h>
#include <stdlib.h>
#include "queueArrays.h"

int* array = NULL;
int headOfLine, line = 0;
int size = 2;

int dequeue(){
    if(line == headOfLine){
        printf("Line is empty");
        return -1;
    }
    if(line - headOfLine <= size/4){
        int *array2 = (int*)malloc(sizeof(int)*size/2);
        for(int i =0;i<line-headOfLine;i++){
            array2[i] = array[headOfLine+i];
        }
        line -= headOfLine;
        headOfLine = 0;
        free(array);
        size /= 2;
        array = array2;
    }

    return array[headOfLine++];
}
void clean(){
    if(headOfLine == 0){
        return ;
    }
    for(int i=0;i<size;i++){
        array[i] = array[i+headOfLine];
    }
    line -= headOfLine;
    headOfLine = 0;
}

void enqueue(int a){
    if(array == NULL){
        array = (int*)malloc(sizeof(int)*2);
    }
    if (line >= size){
        size *= 2; 
        int *array2 = (int*)malloc(sizeof(int)*size);
        for(int i = 0;i<size/2;i++){
            array2[i] = array[i];
        }
        free(array);
        array = array2;
    }
    
    array[line++] = a;
}