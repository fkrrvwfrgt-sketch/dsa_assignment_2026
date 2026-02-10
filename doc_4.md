# Documentation: Task 4 - Doubly Linked List

## (a) Data Structure Definition
A **Doubly Linked List** `struct Node` with `data`, a `next` pointer, and a `prev` pointer.

## (b) Function Descriptions
- `insertAfter()`: Inserts a new node directly after a specified node by updating four pointers.
- `deleteNode()`: Removes a node by linking its predecessor and successor directly to each other.

## (c) main() Organization
The `main()` function initializes the head, adds nodes to the list, prints the list, deletes a middle node and prints the final list.

## (d) Sample Output
Forward: 10 20 30 
Deleting node with data 20..

Forward: 10 30
