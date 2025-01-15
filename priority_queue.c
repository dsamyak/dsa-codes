#include <stdio.h>
#include <stdlib.h>

// Node structure definition
struct Node {
    int data;
    int priority;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data, int priority) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;
    return temp;
}

// Function to remove the element with the highest priority
void dequeue(struct Node** head) {
    if (*head == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to insert an element into the queue based on its priority
void enqueue(struct Node** head, int data, int priority) {
    struct Node* temp = newNode(data, priority);

    // Check if the head node needs to be replaced
    if (*head == NULL || (*head)->priority > priority) {
        temp->next = *head;
        *head = temp;
    } else {
        struct Node* start = *head;
        while (start->next != NULL && start->next->priority <= priority) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}

// Function to display the queue
void display(struct Node* head) {
    if (head == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    while (head != NULL) {
        printf("Data: %d, Priority: %d\n", head->data, head->priority);
        head = head->next;
    }
}

int main() {
    struct Node* pq = NULL;

    enqueue(&pq, 4, 1);
    enqueue(&pq, 5, 2);
    enqueue(&pq, 6, 0);
    enqueue(&pq, 7, 3);

    printf("Priority Queue:\n");
    display(pq);

    printf("\nDequeueing highest priority element.\n");
    dequeue(&pq);
    display(pq);

    return 0;
}
