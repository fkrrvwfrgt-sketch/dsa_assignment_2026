# Documentation: Task 3 - Reverse Traversal

## (a) Data Structure Definition
A **Singly Linked List** `struct Node` with an integer `data` and a pointer `next` to the next node.

## (b) Function Descriptions
- `push()`: Creates a new node and inserts it at the beginning of the list.
- `reverseTraversal()`: A recursive function that calls itself for the `next` node before printing the current `data`.

## (c) main() Organization
The `main()` function creates a linked list with four integers, prints the list in normal order, and then calls the recursive function to print it in reverse.

## (d) Sample Output
Original List: 10 -> 20 -> 30 -> 40 -> NULL
Reverse Traversal: 40 30 20 10