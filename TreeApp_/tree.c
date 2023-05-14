#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int val)
{
    Node* pNode = (Node*)malloc(sizeof(Node));

    pNode->value = val;
    pNode->left = NULL;
    pNode->right = NULL;

    return pNode;
}

void connectChild(Node* parent, Node* left, Node* right)
{
    parent->left = left;
    parent->right = right;
}

Node* makeTree()
{
    Node* pRoot = createNode(100);
    Node* tLeft = createNode(200);
    Node* tRight = createNode(300);

    connectChild(pRoot, tLeft, tRight);

    return pRoot;
}

void Preorder(Node* root)
{
    if (root != NULL)
    {
        printf("%d ", root->value);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(Node* root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d ", root->value);
        Inorder(root->right);
    }
}

void Postorder(Node* root)
{
    if (root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d ", root->value);
    }
}

void printNode(Node* root)
{
    printf("Preorder traversal: ");
    Preorder(root);
    printf("\n");

    printf("Inorder traversal: ");
    Inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    Postorder(root);
    printf("\n");
}
