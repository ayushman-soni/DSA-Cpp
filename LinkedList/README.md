# Linked List in C++

This folder contains the implementation of fundamental Singly Linked List operations in C++.

## Concepts Covered

- Creating a Node class
- Dynamic memory allocation using `new`
- Creating multiple nodes
- Linking nodes using the `next` pointer
- Traversing a linked list using a loop
- Accessing node data using the `->` operator
- Understanding `(*pointer).member` and `pointer->member`
- Insertion Operations
- Deletion Operations
- Pointer Manipulation
- Handling Edge Cases

## Linked List Structure

```text
10 -> 20 -> 30 -> 40 -> 50 -> NULL
```

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

---

## Implemented Operations

### Insertion Operations

- Insert at Head
- Insert at Tail
- Insert at Kth Position
- Insert Before a Given Value

### Deletion Operations

- Delete Head Node
- Delete Tail Node
- Delete Node at Kth Position
- Delete Node by Value

---

## Complexity Summary

| Operation | Time Complexity | Space Complexity |
|-----------|----------------|------------------|
| Traversal | O(N) | O(1) |
| Search | O(N) | O(1) |
| Insert at Head | O(1) | O(1) |
| Insert at Tail | O(N) | O(1) |
| Insert at Kth Position | O(N) | O(1) |
| Insert Before Value | O(N) | O(1) |
| Delete Head | O(1) | O(1) |
| Delete Tail | O(N) | O(1) |
| Delete Kth Position | O(N) | O(1) |
| Delete By Value | O(N) | O(1) |

---

## Learning Outcome

- Linked List Traversal
- Searching in a Linked List
- Node Insertion
- Node Deletion
- Pointer Manipulation
- Memory Management
- Handling Edge Cases
---

## Language

- C++
