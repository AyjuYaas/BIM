class queue {
    final int MAX = 5;
    int[] q = new int[MAX];
    int front = -1, rear = -1;

    // PEEK IS GETTING THE 1st ELEMENT WITHOUT REMOVING IT
    void enQueue(int el) {
        if (isFull())
            System.out.println("Queue is Full");
        else {
            if (front == -1)
                front = 0;
            q[++rear] = el;
            System.out.println(el + " is inserted");
        }
    }

    void deQueue() {
        if (isEmpty())
            System.out.println("Queue is Empty");
        else {
            System.out.println(q[front] + " is removed");
            if (front == rear)
                front = rear = -1;
            else
                front++;
        }
    }

    void display() {
        if (isEmpty())
            System.out.println("Cannot Display, Empty Queue");
        else {
            System.out.println("Current Queue Elements:");
            for (int i = front; i <= rear; i++) {
                System.out.print(q[i] + "\t");
            }
            System.out.println("\n");
        }
    }

    boolean isFull() {
        if (rear == (MAX - 1))
            return true;
        return false;
    }

    boolean isEmpty() {
        if (front == -1)
            return true;
        return false;
    }
}

public class queueImplement {
    public static void main(String[] args) {
        queue q = new queue();
        q.enQueue(1);
        q.enQueue(2);
        q.enQueue(3);
        q.display();

        q.deQueue();
        q.display();

        q.deQueue();
        q.display();

        q.deQueue();
        q.display();

        q.deQueue();

        q.enQueue(2);
        q.display();

    }
}
