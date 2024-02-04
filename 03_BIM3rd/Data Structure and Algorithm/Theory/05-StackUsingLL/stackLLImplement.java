class node {
    int info;
    node next;

    node(int el) {
        info = el;
        next = null;
    }
}

class stackLL {
    node top;

    void push(int el) {
        System.out.println(el + " is pushed in stack");

        node newNode = new node(el);

        newNode.next = top;
        top = newNode;
    }

    void pop() {
        if (top == null)
            System.out.println("Empty Stack");

        else {
            System.out.println(top.info + " is popped from the stack");
            top = top.next;
        }
    }

    void search(int key) {
        if (top == null)
            System.out.println("Empty Stack");
        else {
            node temp = top;
            int count = 1;
            int flag = 0;
            while (temp != null) {
                if (temp.info == key) {
                    System.out.println(key + " found at pos: " + count);
                    flag++;
                    break;
                }
                temp = temp.next;
                count++;
            }
            if (flag == 0)
                System.out.println(key + " is not found in stack");
        }
    }

    void display() {
        if (top == null)
            System.out.println("Empty Stack");
        else {
            System.out.println("Current Stack Elements: ");
            node temp = top;
            while (temp != null) {
                System.out.println(temp.info);
                temp = temp.next;
            }
            System.out.println();
        }
    }
}

class stackLLImplement {
    public static void main(String[] args) {
        stackLL l = new stackLL();
        l.push(5);
        l.push(4);
        l.push(3);
        l.push(21);
        l.display();

        l.pop();
        l.display();

        l.search(3);
    }
}