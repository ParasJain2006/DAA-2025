#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to detect cycle using Floyd’s algorithm
int detectCycle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // move 1 step
        fast = fast->next->next;    // move 2 steps

        if (slow == fast) {
            return 1;  // cycle detected
        }
    }
    return 0;  // no cycle
}

// Helper function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main() {
    // Example linked list with cycle
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    // Creating a cycle: last node points to 2nd node
    head->next->next->next->next = head->next;

    if (detectCycle(head))
        printf("Cycle detected!\n");
    else
        printf("No cycle detected.\n");

    return 0;
}
