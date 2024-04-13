#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int value;
    struct node* next;
}node;


void printlist(node* head)
{
    node* it = head;
    while(it != NULL)
    {
        printf("%d\n",it->value);
        it = it->next;
    }
}


void insertAtEnd(node* head ,node* node)
{
    struct node* it = head;
    while(it->next!=NULL)
    {
        it = it->next;
    }
    it ->next = node;
}

void removeNode(node** head_ref, int k)
{
    node *temp = *head_ref, *prev;
 
    if (temp != NULL && temp->value == k) {
        *head_ref = temp->next; 
        free(temp);
        return;
    }
 
    while(temp != NULL && temp->value != k) {
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL)
    {
    	return;
	}
    
    prev->next = temp->next;
    free(temp);
}

int main() {
	int k;
    node* head = (node*)malloc(sizeof(node));
    head->value = 1;
    head->next = NULL;
    
    node* node = (struct node*)malloc(sizeof(node));
    node->value = 2;
    node->next = NULL;
    insertAtEnd(head,node);
    
    node = (struct node*)malloc(sizeof(node));
    node->value = 3;
    node->next = NULL;
    insertAtEnd(head,node);
    
        node = (struct node*)malloc(sizeof(node));
    node->value = 4;
    node->next = NULL;
    insertAtEnd(head,node);
    
    printlist(head);
    
    printf("Enter number of node to be removed: ");
    scanf("%d",&k);
    
    removeNode(&head, k);
    printlist(head);
    
    return 0;
}
