# Documentation: Task 6 - Max Heap

## (a) Data Structure Definition
A **Binary Heap** stored as a one-dimensional integer array where children of index $i$ are at $2i+1$ and $2i+2$.

## (b) Function Descriptions
- `heapify()`: Restores the heap property by swapping a parent with its largest child.
- `insert()`: Adds an element to the end and heapifies the tree.
- `deleteRoot()`: Swaps the root with the last element, reduces size, and heapifies down.

## (c) main() Organization
The `main()` function inserts five values into the heap, prints the array representation, deletes the root, and prints the resulting array.

## (d) Sample Output
Max-Heap array: 9 5 3 1 2 

After deleting element 9: 5 2 3 1
