#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void reverseNode(struct Node** head_ref)
{
   struct Node* prev = NULL;
   struct Node* current = *head_ref;
   struct Node* next = NULL;
   while(current!=NULL)
   {
       next = current->next;
       
       current->next = prev;
       
       prev = current;
       
       current = next;
   }
   *head_ref = prev;
}


void printList(struct Node* temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


int main() {
    //Allocate nodes
    struct Node* head;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    
    struct Node* node2;
    node2 = (struct Node*)malloc(sizeof(struct Node));
    node2->data = 2;
    node2->next = NULL;
    
    struct Node* node3;
    node3 = (struct Node*)malloc(sizeof(struct Node));
    node3->data = 3;
    node3->next = NULL;
    

    //Link nodes
    head->next=node2;
    node2->next=node3;
    
    printList(head);//Print nodes
    printf("\n");
    
    reverseNode(&head);//Reverse node
    printList(head);
    
    return 0;
}
