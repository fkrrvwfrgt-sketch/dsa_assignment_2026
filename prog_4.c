#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to insert a node after a given node
void insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL");
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

// Function to delete a node
void deleteNode(struct Node** head_ref, struct Node* del) {
    if (*head_ref == NULL || del == NULL) return;

    // If node to be deleted is head node
    if (*head_ref == del) *head_ref = del->next;

    // Change next only if node to be deleted is NOT the last node
    if (del->next != NULL) del->next->prev = del->prev;

    // Change prev only if node to be deleted is NOT the first node
    if (del->prev != NULL) del->prev->next = del->next;

    free(del);
}

void printList(struct Node* node) {
    struct Node* last;
    printf("\nForward: ");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;

    insertAfter(head, 20); // List: 10 <-> 20
    insertAfter(head->next, 30); // List: 10 <-> 20 <-> 30
    
    printList(head);

    printf("Deleting node with data 20...");
    deleteNode(&head, head->next);
    
    printList(head);

    return 0;
}