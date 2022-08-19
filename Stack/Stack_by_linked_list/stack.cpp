#include <iostream>
using namespace std; 

class StackNode{
    public:
        int data ; 
        StackNode* next ; 
}; 

StackNode* newNode(int data){
    StackNode* node = new StackNode();
    node->data = data ; 
    node->next = NULL ; 

    return node ; 
}

int isEmpty(StackNode* node){
    return !node;
}

void push(StackNode** node, int data){
    StackNode* stacknode = newNode(data) ; 
    stacknode->next = *node ; 
    *node = stacknode ; 
    cout<<data<<"pushed to stack \n" ;  
}

int pop(StackNode** root){
    if(isEmpty(*root)){
        return 0 ; 
    }
    StackNode* temp = *root ; 
    *root = (*root)->next ; 
    int popped = temp->data ;
    free(temp) ; 

    return popped ; 
}

int peek(StackNode* root){
    if(isEmpty(root)){
        return 0 ; 
    }
    return root->data ; 
}

int main()
{
    StackNode* root = NULL;
  
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

