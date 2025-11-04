#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteEvenPositionNodes(struct Node** head) {
    if (*head == NULL) return;

    struct Node* prev = *head;
    struct Node* curr = (*head)->next;
    int count = 2;

    while (curr != NULL) {
        if (count % 2 == 0) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
        count++;
    }
}

void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int size;

    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        int value;
        scanf("%d", &value);
        insertNode(&head, value);
    }

    printf("Original Linked List: ");
    displayLinkedList(head);

    deleteEvenPositionNodes(&head);

    printf("Final Linked List: ");
    displayLinkedList(head);

    struct Node* temp = head;
    while (head != NULL) {
        head = head->next;
        free(temp);
        temp = head;
    }

    return 0;
}
