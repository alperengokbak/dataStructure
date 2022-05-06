#ifndef queueLinkedList
#define queueLinkedList

struct n {
    int data;
    n* next;
};
typedef n node;

void enqueue(int x);
int dequeue();
#endif