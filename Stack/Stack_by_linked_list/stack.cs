using System ; 
namespace Stack.Stack_by_linked_list{
    class StackNode{
        public int data ; 
        public StackNode next ; 

        public StackNode(int data){
            this.data = data ; 
            this.next = null ; 
        }
        public int getData() {return this.data ;}
        public void setData(int data) {this.data = data ;}

        public StackNode getNext() {return this.next ;}
        public void setNext(StackNode next) {this.next = next ;}

        public int key{
            get {return data ;}
            set {data = value ;}
        }
        public StackNode newNext{
            get {return next ;}
            set {next = value ;}
        }

        public bool isEmpty(StackNode node){
            return node == null ; 
        }

        public void push(StackNode node, int data){
            StackNode newNode = new StackNode(data) ; 
            if(node == null){
                node = newNode ;
            }else{
                StackNode temp = node ; 
                newNode.next = temp ; 
                node = newNext ; 
            }   
        }

        public int pop(StackNode node){
            if(isEmpty(node)){
                Console.WriteLine("Stack is underflow !!!") ; 
                return 0 ; 
            }

            StackNode temp = node ; 
            node = node.next ; 

            return temp.data ; 
        }

        public int peek(StackNode node){
            if(isEmpty(node)){
                Console.WriteLine("Stack is underflow !!!") ;
                return 0 ; 

            }
            return node.data ;  
        }
    }

    public class TextProgram{
        public static void Main(string[] args){
            StackNode stack = new StackNode(10) ; 
            stack.push(stack, 20) ; 
            stack.push(stack, 30) ; 
            stack.push(stack, 40) ;

            Console.WriteLine("Element current in stack : "+stack.peek(stack)) ;  
        }
    }
}