#ifndef stackLinkedList
#define stackLinkedList

struct n
{
    n* next;
    int data;
};
typedef n node;
int pop(node *);
node* push (node*,int);
void printList(node* root);
#endif
