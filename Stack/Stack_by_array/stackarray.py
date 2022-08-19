class stack :
    def __init__(self):
        self.top = -1 
        self.list = []

    def isEmpty(self):
        return self.top == -1 
    
    def isFull(self):
        return self.top == len(self.list)
    def push(self, data):
        if(self.isFull()):
            print("Stack is overflow !!!") 
            return 
        self.list.append(data) 
        self.top = self.top + 1 
    def pop(self):
        if(self.isEmpty()):
            print("Stack is underflow !!!")
            return 
        x = self.list.pop(self.top)
        return x 

    def peek(self):
        return self.list[self.top] 
    def display(self):
        for i in self.list:
            print(i, end = " ")
s = stack()

s.push(10) 
s.push(20)
s.push(30)
s.push(40) 
print("Print item : ")
s.display() 
print("\n") 
print("Item popped from stack : ",s.pop()) 
