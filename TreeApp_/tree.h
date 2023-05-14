#ifndef TREE_H
#define TREE_H

typedef struct Node {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* makeTree();
Node* createNode(int value);
void printNode(Node* root);

#endif
