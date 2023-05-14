#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Node* root = makeTree();
    printNode(root);
    return 0;
}
