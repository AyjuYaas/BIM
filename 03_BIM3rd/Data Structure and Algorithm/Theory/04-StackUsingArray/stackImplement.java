class stack {
    int MAX = 10;
    int[] stack = new int[MAX];
    int top = -1;

    void push(int el) {
        if (top == MAX - 1)
            System.out.println("Stack Full");
        else {
            System.out.println(el + " pushed in the stack");
            stack[++top] = el;
        }
    }

    void pop() {
        if (!isEmpty()) {
            System.out.println(stack[top] + " is popped");
            --top;
        }
    }

    void search(int el) {
        if (!isEmpty()) {
            for (int i = top; i > -1; i--) {
                if (stack[i] == el) {
                    System.out.println(el + " Found at pos: " + (i + 1));
                    return;
                }
            }
            System.out.println(el + "Not Found in stack");
        }

    }

    void display() {
        if (!isEmpty()) {
            System.out.println("Current Stack Items");
            for (int i = top; i > -1; i--) {
                System.out.println(stack[i]);
            }
        }
        System.out.println();
    }

    boolean isEmpty() {
        if (top == -1) {
            System.out.println("Empty Stack");
            return true;
        }
        return false;
    }
}

public class stackImplement {
    public static void main(String[] args) {
        stack s = new stack();

        s.pop();

        s.push(0);
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.display();

        s.pop();
        s.pop();
        s.display();

        s.search(2);
    }
}
