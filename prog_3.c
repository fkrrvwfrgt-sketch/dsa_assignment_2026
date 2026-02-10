#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the beginning
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Task 3: Reverse Traversal Function (Recursive)
void reverseTraversal(struct Node* head) {
    if (head == NULL)
        return;

    // First recur on the rest of the list
    reverseTraversal(head->next);

    // Then print the data
    printf("%d ", head->data);
}

// Function to print the list normally
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Creating a list: 10 -> 20 -> 30 -> 40
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    printf("Original List: ");
    printList(head);

    printf("Reverse Traversal: ");
    reverseTraversal(head);
    printf("\n");

    return 0;
}