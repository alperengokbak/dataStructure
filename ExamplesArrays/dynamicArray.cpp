#include <stdio.h>
#include <stdlib.h>

int main(){
    // int a[5] = {18,25,30,4,5};

    // for(int i = 0;i<5;i++){
    //     printf("%d\n",a[i]);
    // }

    int *b = (int*)malloc(sizeof(int)*5);
    b[3]=8;
    b[0]=10;
    *(b+1)=7;
    *(b+2)=3;
    b[4]=13;

        for(int i = 0;i<5;i++){
        printf("%d\n",b[i]);
    }
}