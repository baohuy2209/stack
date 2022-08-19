#include <iostream> 
using namespace std; 

struct StackNode{
    int data ; 
    struct StackNode* next ; 
}; 

struct StackNode* newStackNode(int data){
    struct StackNode* stacknode = new struct StackNode ; 
    stacknode->data =data ; 
    stacknode->next = NULL ; 

    return stacknode ; 
}

int isEmpty(struct StackNode* stack){
    return !stack ; 
}

void push(struct StackNode** stack, int data){
    struct StackNode* newnode = newStackNode(data) ; 
    newnode->next = *stack ; 

    *stack = newnode ; 
}

int pop(struct StackNode** stack){
    if(isEmpty(*stack)){
        return 0 ; 
    }

    struct StackNode* temp = *stack ; 
    *stack = (*stack)->next ; 
    int popped = temp->data ; 

    return popped ; 
}
int peek(struct StackNode* stack){
    if(isEmpty(stack)){
        return 0 ; 
    }

    return stack->data ; 
}

int main()
{
    struct StackNode* root = NULL;
  
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
  
    cout << pop(&root) << " popped from stack\n";
  
    cout << "Top element is " << peek(root) << endl;
      
    cout<<"Elements present in stack : ";
     //print all elements in stack :
    while(!isEmpty(root))
    {
        // print top element in stack
        cout<<peek(root)<<" ";
        // remove top element in stack
        pop(&root);
    }
  
    return 0;
}

