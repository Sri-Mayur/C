//Write a program to reverse the Linked List
// Set-18

/*Step 1: Create a structure.
  Step 2: Create int main and take value of n.
  Step 3: Create a linked list of n nodes.
  Step 4: Create n nodes.
  Step 5: Display the linked list.
*/

#include <stdio.h>
#include <stdlib.h>

// Step 1:
struct Node{
    int data;
    struct Node* next;
};

//Step 4:
//Function to create a new node
struct Node* createNode(int data){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

//Step 3:
//Function to create a linked list with n nodes
struct Node* createLinkedList(int n){
    if(n<=0){
        printf("Invalid Input!!!!");
        return NULL;
    }
    
    struct Node* head = NULL;
    struct Node* tail = NULL;
    
    for (int i=1; i<=n; i++){
        int data;
        printf("Enter the data of node%d: ",i);
        scanf("%d",&data);
        
        struct Node* newNode = createNode(data);
        
        if (head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail= newNode;
        }
    }
    
    return head;
}

//Step 5:
//Function to display the linked list
void displayLinkedList(struct Node* head){
    struct Node* current = head;
    
    printf("Linked List: ");
    while(current != NULL){
        printf("%d ->",current->data);
        current =  current->next;
        
    }
    printf("NULL\n");
    
}


//Step 2:
int main(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    
    struct Node* head= createLinkedList(n);
    
    displayLinkedList(head);
    
    return 0;
}
