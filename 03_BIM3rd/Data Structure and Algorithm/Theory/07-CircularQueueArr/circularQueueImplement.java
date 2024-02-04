class circularQueue {
    final int MAX = 3;
    int[] arr = new int[MAX];
    int front = -1, rear = -1;

    boolean isFull() {
        if (front == ((rear + 1) % MAX))
            return true;
        return false;
    }

    boolean isEmpty() {
        if (front == -1)
            return true;
        return false;
    }

    void enQueue(int el) {
        if (isFull())
            System.out.println("Queue is Full");
        else {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % MAX;
            arr[rear] = el;
            System.out.println(el + " is inserted");
        }
    }

    void deQueue() {
        if (isEmpty())
            System.out.println("Queue is Empty");
        else {
            System.out.println(arr[front] + " is removed");
            front = (front + 1) % MAX;
        }
    }

    void display() {
        if (isEmpty())
            System.out.println("Cannot Display, Empty Queue");
        else {
            int i;
            System.out.println("The Queue Items Are:");
            for (i = front; i != rear; i = ((i + 1) % MAX)) {
                System.out.print(arr[i] + "  ");
            }
            System.out.println(arr[i]);
            System.out.println();
        }
    }
}

class circularQueueImplement {
    public static void main(String[] args) {
        circularQueue c = new circularQueue();
        c.enQueue(1);
        c.enQueue(2);
        c.enQueue(3);
        c.enQueue(4);
        c.display();

        c.deQueue();
        c.display();

        c.enQueue(4);
        c.display();

        c.enQueue(5);
        c.display();
    }
}
