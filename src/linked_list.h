#pragma once

#include "node.h"

class LinkedList {
public:
  // Constructor
  LinkedList();

  // Destructor
  ~LinkedList();

  // Returns the number of Nodes inside the  list.
  int Size() const;

  // Returns the pointer to Node at position |pos|.
  // Returns nullptr if position |pos| does not exists.
  Node *GetMutableNode(int pos);

  // Returns the read-only reference to Node at position |pos|, |pos| must be
  // smaller than the number of Nodes in the list.
  const Node &GetNode(int pos) const;

  // Returns  the number of nodes with value equal |val| on the list.
  int Count(int val) const;

  // Create new Node with value |val| and append it at the end of the linked
  // list.
  void Append(int val);

  // Traverse the linked list and displays the value of all Nodes onto the screen.
  void Print() const;

  // Create new Node with value |val| and insert it to the linked list at
  // position |pos| where the beginning of the linked list is position 0.
  // If |pos| > Size(), append at the end of the list (same as Append()).
  // If |pos| <= 0, add the new node at the beginning of the list.
  void Insert(int val, int pos);

  // Remove the node at position |pos|.
  // Returns false if position |pos| does not exists, otherwise return true.
  bool EraseAt(int pos);

  // Remove the first node with value |val|.
  // Returns true if |val| node has been erased, otherwise return false.
  bool Erase(int val);

private:
  /*
  FEEL FREE TO EDIT/ADD MEMBERS AS NEEDED.
  */
  Node *head_; // the beginning of the linked list.
};
