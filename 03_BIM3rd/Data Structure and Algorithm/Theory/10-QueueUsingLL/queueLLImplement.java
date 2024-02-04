class node {
    int info;
    node next;

    node(int info) {
        this.info = info;
        next = null;
    }
}

class queueLL {
    node front = null, rear = null;

    void enQueue(int el) {
        node newNode = new node(el);
        newNode.next = null;
        System.out.println(el + " is inserted");
        if (front == null)
            front = rear = newNode;
        else {
            rear.next = newNode;
            rear = newNode;
        }
    }

    void deQueue() {
        if (front == null)
            System.out.println("Empty Queue");
        else {
            System.out.println(front.info + " is removed");
            if (front == rear)
                front = rear = null;
            else
                front = front.next;
        }
    }

    void display() {
        if (front == null)
            System.out.println("Empty Queue");
        else {
            node temp = front;
            System.out.println("\nCurrent Element in Queue");
            while (temp != null) {
                System.out.print(temp.info + "\t");
                temp = temp.next;
            }
            System.out.println("\n");
        }
    }
}

class queueLLImplement {
    public static void main(String[] args) {
        queueLL q = new queueLL();
        q.enQueue(2);
        q.enQueue(3);
        q.enQueue(4);
        q.display();

        q.deQueue();
        q.display();
    }
}
