package Stack_by_linked_list;

class stacknode {
    public int data;
    public stacknode next;

    public stacknode(int data) {
        this.data = data;
        this.next = null;
    }

    public int getData() {
        return this.data;
    }

    public void setData(int data) {
        this.data = data;
    }

    public stacknode getNext() {
        return this.next;
    }

    public void setNext(stacknode next) {
        this.next = next;
    }

    public boolean isEmpty(stacknode node) {
        return node == null;
    }

    public void push(stacknode node, int data) {
        if (isEmpty(node)) {
            return;
        }
        stacknode newnode = new stacknode(data);
        stacknode temp = node;
        newnode.next = temp;
        node = newnode;

        System.out.println(data + " pushed to stack .");
    }

    public int pop(stacknode node) {
        if (isEmpty(node)) {
            System.out.println("Stack is underflow !!!");
            return 0;
        }
        stacknode temp = node;
        node = node.next;
        int popped = temp.data;

        return popped;
    }

    public int peek(stacknode node) {
        if (isEmpty(node)) {
            System.out.println("Stack is underflow !!!");
            return 0;
        }
        return node.data;
    }
}

public class stack {
    public static void main(String[] args) {
        stacknode stack = new stacknode(10);
        stack.push(stack, 30);
        stack.push(stack, 40);
        stack.push(stack, 50);

        System.out.println("Top element is : " + stack.peek(stack));
    }
}
