//Write a program to reverse the Linked List
// Set-18

/*Step 1: Create a structure.
  Step 2: Create int main and take value of n.
  Step 3: Create a linked list of n nodes.
  Step 4: Create n nodes.
  Step 5: Display the linked list.
  Step 6: Reverse the Linked List.
*/


#include <stdio.h>
#include <stdlib.h>

//Function to define a structure called 'Node'
/*It has two members 'data' to store data of the node
  and 'next' to point to the nect node in the list.
*/
struct Node{
    int data;
    struct Node* next;
};


//Function to create a new node
struct Node* createNode(int data){
    
    //Allocating memory to the new node
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    
    //Checking if the new node is empty
    if (newNode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    //Assigning data to the new node
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

//Function to create a linked list with n nodes
struct Node* createLinkedList(int n){
    if(n<=0){
        printf("Invalid Input!!!! \n");
        return NULL;
    }
    
    //Initializing head and tail with NULL.
    struct Node* head = NULL;
    struct Node* tail = NULL;
    
    // Giving data to each node.
    for (int i=1; i<=n; i++){
        int data;
        printf("Enter the data of node%d: ",i);
        scanf("%d",&data);
        
        //Giving data to the new node
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

//Function to display the linked list
void displayLinkedList(struct Node* head){
    
    //creatin a node called 'current' pointinh 'head'
    struct Node* current = head;
    
    //printf("Non-reversed Linked List: ");
    
    
    while(current != NULL){
        printf("%d ->",current->data);
        current =  current->next;
        
    }
    
    //Printing last node is pointing tom NULL
    printf("NULL\n");
    
}

//Function to reverse the Linked List
struct Node* reverseLinkedList(struct Node* head){
    struct Node* prev=NULL;
    struct Node* current=head;
    struct Node* next=NULL;
    
    while (current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    
    return prev;
}

int main(){
    int n;
    //Taking value of n from the user.
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    
    //Calling createLinkedList function and assigning head value
    struct Node* head= createLinkedList(n);
    
    //Calling a function to print the linked list.
    printf("\n");
    printf("Original Linked List:\n");
    displayLinkedList(head);
    printf("\n");
    
    //Assigning new value to head
    head=reverseLinkedList(head);
    
    //Calling display function to print reversed linked list
    printf("Reversed Linked List\n");
    displayLinkedList(head);
    
    return 0;
}




