//This is insertion and deletion at the beginning program

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* head = NULL;

void insertBeginning(int value) {
    if (value < 0) {
        printf("-ve Node data\n");
        exit(0);
    }

    struct Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void display() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    printf(" -> NULL\n");
}

int main() {
    int operation, value;

    while (1) {
        scanf("%d", &operation);

        if (operation == -1) {
            scanf("%d", &value);
            insertBeginning(value);
        } else if (operation == -2) {
            deleteBeginning();
        } else if (operation == -3) {
            display();
        } else if (operation == -4) {
            break;
        } else if (operation < 0) {
            printf("-ve Node data\n");
            break;
        }
    }

    return 0;
}
