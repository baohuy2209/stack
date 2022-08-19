using System ; 
namespace Stack.Stack_by_array {
    class stack{
        public int top ; 
        public int [] a ; 
        public stack(int capacity){
            top = -1 ; 
            a = new int[capacity]; 
        }

        public bool isEmpty(){
            return top == -1 ; 
        }
        public bool isFull(){
            return top >= a.Length - 1 ; 
        }

        public void push(int item){
            if(isFull()){
                Console.WriteLine("Stack is overflow !!!") ; 
                return ; 
            }

            top = top + 1 ; 
            a[top] = item ; 
        }
        public int pop(){
            if(isEmpty()){
                Console.WriteLine("Stack is underflow !!!") ; 
                return 0 ; 
            }

            return a[top--] ; 
        }

        public void display(){
            for(int i = 0 ; a[i] != 0 ; i++){
                Console.Write(a[i]+" ") ; 
            }
        }
        public int peek(){
            if(isEmpty()){
                Console.WriteLine("Stack is empty") ; 
                return 0 ; 
            }
            return a[top] ; 
        }
    }
    public class stackarray{
        public static void Main(string[] args){
            stack s = new stack(5);
            s.push(10) ; 
            s.push(20) ; 
            s.push(30) ; 
            s.push(40) ; 
            s.display() ; 
            Console.WriteLine("\n") ; 
            Console.WriteLine("Item with popped from stack : "+s.pop()) ; 
            Console.WriteLine("Current item in the stack : "+s.peek()) ; 

            Console.WriteLine("\n") ; 
        }
    }
}