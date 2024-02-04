class queueImplementataion {
    final int MAX = 10;
    int[] queue = new int[MAX];
    int front = -1;
    int rear = -1;

    void enQueue(int el) {
        if (rear == (MAX - 1))
            System.out.println("Queue is Full");
        else {
            System.out.println(el + " is added to the Queue");
            if (front == -1)
                front = 0;
            rear++;
            queue[rear] = el;
        }
    }

    void deQueue() {
        if (front == -1)
            System.out.println("Queue is empty");
        else {
            System.out.println(queue[front] + " is removed from the Queue");
            if (front == rear)
                front = rear = -1;
            else
                front++;
        }
    }

    void display() {
        if (front == -1)
            System.out.println("Empty Queue! Nothing to Display");
        else {
            System.out.println("Current Queue Elements:");
            for (int i = front; i <= rear; i++) {
                System.out.print(queue[i] + "\t");
            }
            System.out.println("\n");
        }
    }

    void search(int key) {
        if (front == -1)
            System.out.println("Empty Queue! Nothing to Search");
        else {
            int pos = 1;
            for (int i = front; i <= rear; i++) {
                if (queue[i] == key) {
                    System.out.println(key + " found at position " + pos);
                    return;
                }
                pos++;
            }
            System.out.println(key + " Not found on Queue");
        }
    }
}

class queue {
    public static void main(String[] args) {
        queueImplementataion q = new queueImplementataion();
        q.display();

        q.enQueue(0);
        q.enQueue(5);
        q.enQueue(10);
        q.enQueue(15);
        q.display();

        q.deQueue();
        q.display();

        q.search(10);
        q.search(100);
    }
}
