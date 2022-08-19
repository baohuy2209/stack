package Stack_by_array;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

class stack {
    private int top;
    private int item[];

    stack(int size) {
        top = -1;
        item = new int[size];
    }

    void pushitem(int data) {
        if (top == item.length - 1) {
            System.out.println("Stack is full .");
        } else {
            item[++top] = data;
            System.out.println("Pushed item : " + item[top]);
        }
    }

    int popitem() {
        if (top < 0) {
            System.out.println("Stack if underflow : ");
            return 0;
        }
        System.out.println("Pop item :" + item[top]);
        return item[top--];
    }

    void displayAll() {
        for (int i = 0; item[i] != 0; i++) {
            System.out.println(item[i] + "\t");
        }
        System.out.println(" ");
    }
}

public class stackusingarray {
    public static void main(String[] args) throws IOException {
        stack stk = new stack(5);
        boolean yes = true;
        int choice;
        BufferedReader is = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("1) Push \n 2) Pop \n 3) Display \n 4)Exit \n");
        while (yes) {
            System.out.print("\n Enter choice : ");
            choice = Integer.parseInt(is.readLine());
            switch (choice) {
                case 1:
                    System.out.println("Enter Push Item :");
                    stk.pushitem(Integer.parseInt(is.readLine()));
                    break;
                case 2:
                    stk.popitem();
                    break;
                case 3:
                    stk.displayAll();
                    break;
                case 4:
                    yes = false;
                    break;
                default:
                    System.out.println("Wrong Entry !!!");

                    break;
            }

        }
    }
}
