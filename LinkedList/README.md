# Linked List Basics - Traversal

This program demonstrates the fundamental concepts of a Singly Linked List in C++.

## Concepts Covered

- Creating a Node class
- Dynamic memory allocation using `new`
- Creating multiple nodes
- Linking nodes using the `next` pointer
- Traversing a linked list using a loop
- Accessing node data using the `->` operator
- Understanding `(*pointer).member` and `pointer->member`

## Linked List Structure

10 -> 20 -> 30 -> 40 -> 50 -> NULL

## Key Learning

The following traversal pattern is the foundation of most beginner linked list problems:

```cpp
Node* temp = head;

while(temp != NULL){
    // Process current node
    temp = temp->next;
}
```

## Problems Based on the Same Pattern

- Count Nodes in Linked List
- Search an Element
- Print Linked List
- Sum of Nodes
- Find Maximum Element
- Find Minimum Element

All of the above problems can be solved by modifying the operation performed inside the traversal loop.
