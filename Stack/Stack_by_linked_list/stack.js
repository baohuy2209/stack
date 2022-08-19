class StackNode{
    constructor(data){
        this.data = data ; 
        this.next = null ; 
    }
}

var root = null ;
function isEmpty(){
    return root == null ; 
} 
function push(data){
    var newstack = new StackNode(data) ;
    if(isEmpty()){
        root = newstack ;  
    }else{
        var temp = root ;  
        newstack.next = temp ; 
        root = newstack ;  
    }
}

function pop(){
    if(isEmpty()){
        return 0 ; 
    }
    var temp = root ; 
    root = root.next ; 

    return temp.data ; 
}

function peek(){
    if(isEmpty()){
        console.log("Stack is empty .") ; 
        return 0 ; 
    }else{
        return root.data ; 
    }
}

push(20) ; 
push(30) ;
push(40) ; 
console.log("Element current : ", peek()) 
console.log("Popped element : ", pop()) 
