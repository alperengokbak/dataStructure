#ifndef stackArray
#define stackArray

struct s {
    int size;
    int top;
    int* array;
};
typedef s stack;
stack* def();
int pop(stack *);
void push(int a,stack* s);
void printArray(stack *);

#endif