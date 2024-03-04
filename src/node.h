#pragma once

/* Implement functions to support the struct Node including 
 * 1. Print: display the value of Node. (Part 1.1)
 * 2. CreateNode: create the new node and return its pointer (Part 1.2)
 * 3. FreeNode: free the space pointed by node pointer. (Part 1.2)
 */

// A struct Node holding integer value and pointer to other Nodes.
struct Node {
  int val = 0;
  Node *next = nullptr;
};

// Display value of Node.
void Print(const Node& node);

// Return the pointer to a new Node with value of |val| and |next|.
Node* CreateNode(int val, Node* next = nullptr);

// Free the memery that node point to.
void FreeNode(Node* node);
