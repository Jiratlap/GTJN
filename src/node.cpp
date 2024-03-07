#include "node.h"
#include <iostream>

void Print(const Node& node){
    std::cout << node.val << std::endl;
}

Node* CreateNode(int val, Node* next) {
    Node* newNode = new Node;
    newNode->val = val;
    newNode->next = next;
    return newNode;
}

void FreeNode(Node* node){
    delete node;
}