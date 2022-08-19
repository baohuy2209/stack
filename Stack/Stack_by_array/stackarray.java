package Stack_by_array;

class stack {
    public int top;
    public int capacity;
    public int a[] = new int[capacity];

    public stack(int capacity) {
        top = -1;
        this.capacity = capacity;
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == capacity - 1;
    }

    public void push(int data) {
        if (isFull()) {
            System.out.println("Stack overflow .");
        }
        top = top + 1;
        a[top] = data;
    }

    public int pop() {
        if (isEmpty()) {
            System.out.println("Stack underflow .");
            return 0;
        }
        int x = a[top];
        top = top - 1;
        return x;
    }

    public int peek() {
        if (isEmpty()) {
            System.out.println("Stack underflow .");
            return 0;
        }
        return a[top];
    }

    public int size() {
        return top + 1;
    }
}

public class stackarray {
    public static void main(String[] args) {
        stack s = new stack(100);
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        System.out.println("Size of current stack : " + s.size());
        System.out.println("Popped current element : " + s.pop());

    }
}
