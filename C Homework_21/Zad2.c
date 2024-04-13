#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;                        
    struct node *next;          
}*head;


void createNodeList(int n)
{
    struct Node *NewNode, *prev;
    int num, i;
    head = (struct Node *)malloc(sizeof(struct Node));

    if(head == NULL) 
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        num = 1;
        head->data = num;      
        head->next = NULL;
        
        prev = head;
        

        for(i=2; i<=n; i++)
        {
            NewNode = (struct Node *)malloc(sizeof(struct Node));
            if(NewNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                num = i;
                NewNode->data = num; 
                NewNode->next = NULL;
                
                prev->next = NewNode;
                prev = NewNode;
            }
        }
    }
}

void displayList(int k)
{
    struct Node *disp;
    if(head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        disp = head;
        while(disp != NULL)
        {
            if(disp->data == k)
            {
            printf("%d\n", disp->data);
            }
            disp = disp->next;             
        }
        
        }
        
}


int main()
{
    int n,k;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
        printf(" Input number of node to display : ");
    scanf("%d", &k);
    
    createNodeList(n);
    displayList(k);
    
    return 0;
}
