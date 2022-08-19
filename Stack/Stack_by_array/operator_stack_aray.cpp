#include <iostream> 
using namespace std;
#define MAX 1000
class Stack {
    int top ; 
    public :
        int a[MAX] ; 

        Stack() {top = -1;}

        bool isEmpty(){
            return top < 0 ; 
        }

        void push (int x){
            if(top >= MAX - 1){
                cout <<"Stack overflow"<<endl ;  
            }

            a[top++] = x; 
        }

        int peek(){
            if(isEmpty()){
                cout <<"Stack is empty "<<endl ; 
                return 0 ; 
            }
            return a[top] ; 
        }

        int pop(){
            if(isEmpty()){
                cout<<"Stack overflow" <<endl ; 
                return 0 ; 
            }
            int x = a[top--] ; 
            return x ; 
        }
        int size(){
            int size = 0 ; 
            for(int i = 0 ; i < MAX; i++){
                size = size+1 ; 
                if(a[i] == 0){
                    break ; 
                }
            }
            return size ; 
        }
};

int main(){
    cout<<"Operations with Stack : "<<endl ; 
    cout<<"1. Push element ."<<endl; 
    cout<<"2. Pop element ."<<endl ; 
    cout<<"3. Peek element ."<<endl ; 
    cout<<"4. Check empty status ."<<endl ; 
    cout<<"5. Get size ."<<endl ; 

    Stack s ; 
    bool check = false ; 
    while(!check){
        int choice ; 
        cout<<"Enter the operations : "<<endl ; 
        cin>>choice ; 
        switch (choice){
            case 1:
                int data ; 
                cout<<"Enter the element to push stack : "<<endl ; 
                cin>> data ; 
                s.push(data) ; 
                break;
            case 2:
                cout<<"Element which popped from stack : "<<s.pop()<<endl ; 
                break ; 
            case 3:
                cout<<"current element in stack : "<<s.peek()<<endl  ; 
                break ; 
            case 4:
                cout<<"Empty status = "<<s.isEmpty()<<endl; 
                break ; 
            case 5:
                cout<<"Size of stack : "<<s.size()<<endl; 
                break ; 
            case 6:
                check = true ; 
                break ; 
            default:
                cout<<"Invalid ."<<endl;
                break;
        }
    }
}