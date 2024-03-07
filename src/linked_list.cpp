#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList() : head_(nullptr) {}

LinkedList::~LinkedList() {
  Node *ThisNode = head_;
  while (ThisNode != nullptr) {
    Node *next = ThisNode->next;
    delete ThisNode;
    ThisNode = next;
  }
  head_ = nullptr;
}

int LinkedList::Size() const {
  int size = 0;
  Node *ThisNode = head_;
  while (ThisNode != nullptr) {
    size++;
    ThisNode = ThisNode->next;
  }
  return size;
}

Node *LinkedList::GetMutableNode(int pos) {
  if (pos < 0) return nullptr;
  Node *ThisNode = head_;
  for (int i = 0; i < pos && ThisNode != nullptr; i++) {
    ThisNode = ThisNode->next;
  }
  return ThisNode;
}

const Node &LinkedList::GetNode(int pos) const {
  Node *ThisNode = head_;
  for (int i = 0; i < pos && ThisNode != nullptr; i++) {
    ThisNode = ThisNode->next;
  }
  return *ThisNode;
}

int LinkedList::Count(int val) const {
  int count = 0;
  Node *ThisNode = head_;
  while (ThisNode != nullptr) {
    if (ThisNode->val == val) {
      count++;
    }
    ThisNode = ThisNode->next;
  }
  return count;
}

void LinkedList::Append(int val) {
  Node *NewNode = new Node;
  NewNode->val = val;
  if (head_ == nullptr) {
    head_ = NewNode;
  } else {
    Node *ThisNode = head_;
    while (ThisNode->next != nullptr) {
      ThisNode = ThisNode->next;
    }
    ThisNode->next = NewNode;
  }
}

void LinkedList::Print() const {
  Node *ThisNode = head_;
  while (ThisNode != nullptr) {
    std::cout << ThisNode->val;
    if (ThisNode->next != nullptr) {
      std::cout << "->";
    }
    ThisNode = ThisNode->next;
  }
}

void LinkedList::Insert(int val, int pos) {
  Node *NewNode = new Node;
  NewNode->val = val;
  if (pos <= 0 || head_ == nullptr) {
    NewNode->next = head_;
    head_ = NewNode;
  } else {
    Node *ThisNode = head_;
    for (int i = 0; i < pos - 1 && ThisNode->next != nullptr; i++) {
      ThisNode = ThisNode->next;
    }
    NewNode->next = ThisNode->next;
    ThisNode->next = NewNode;
  }
}

bool LinkedList::EraseAt(int pos) {
  if (head_ == nullptr || pos < 0) return false;
  Node *ThisNode = head_;
  if (pos == 0) {
    head_ = ThisNode->next;
    delete ThisNode;
    return true;
  }
  for (int i = 0; i < pos - 1 && ThisNode->next != nullptr; i++) {
    ThisNode = ThisNode->next;
  }
  if (ThisNode->next == nullptr) return false;
  Node *temp = ThisNode->next;
  ThisNode->next = temp->next;
  delete temp;
  return true;
}

bool LinkedList::Erase(int val) {
  Node *ThisNode = head_;
  Node *PrevNode = nullptr;
  while (ThisNode != nullptr) {
    if (ThisNode->val == val) {
      if (PrevNode == nullptr) {
        head_ = ThisNode->next;
      } else {
        PrevNode->next = ThisNode->next;
      }
      delete ThisNode;
      return true;
    }
    PrevNode = ThisNode;
    ThisNode = ThisNode->next;
  }
  return false;
}