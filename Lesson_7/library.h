#ifndef library
#define library
struct n{
    int data;
    n * next;
    n * prev;
};
typedef n node;
void printList(node*r);
void addVariable(node*r,int x);
node* addVariableInLine(node*r,int x);
node* removeVariable(node*r, int x);
#endif