#ifndef bst
#define bst

struct n{
    int data;
    n* left;
    n* right;
};
typedef n node;

node* add(node* tree, int x);
int max(node* tree);
int min(node* tree);
void traversalLRR(node*tree);
void traversalRRL(node*tree);
int search(node*tree, int searched);
node* deletee(node* tree, int searched);

#endif