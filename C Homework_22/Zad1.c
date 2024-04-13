#include <stdio.h>
 
#define MAXSIZE 10

 
struct Stack {
    int top;
    int array[MAXSIZE];
} st;
 
void initialize() {
 st.top = 0;
}
 
 
int isEmpty() {
 if(st.top == 0)
     return 1;
 else
     return 0;
}
 

void push(int num) {
        st.array[st.top + 1] = num;
        st.top++;
    }

 

int pop() {
    if (isEmpty())
        printf("Stack is Empty...\n");
    else {
     st.top = st.top - 1;
        return st.array[st.top+1];
    }
}
 

void printStack(){
 if(!isEmpty()){
     int temp = pop();
     printStack();
     printf(" %d ", temp);
     push( temp);
    }
}
void insertAtBottom(int item) {
    if (isEmpty()) {
        push(item);
    } else {
        int top = pop();
        insertAtBottom(item);
  
        push(top);
    }
}
 
void reverse() {
    if (!isEmpty()) {
        int top = pop();
        reverse();
  
        insertAtBottom(top);
    }
}

int getSize(){
 return st.top + 1;
}

int main() {
    initialize(st);
    int x;
    scanf("%d",&x);
    push(x);
while(x!=0)
{
    scanf("%d",&x);
    push(x);
}
    printf("Input Stack\n");
    printStack();
    reverse();
    printf("\nOutput Stack\n");
    printStack();
    return 0;
}
