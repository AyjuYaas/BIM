class node {
    int info;
    int priority;
    node next;

    node(int el, int pr) {
        info = el;
        priority = pr;
        next = null;
    }
}

class priorityQueue {
    node head = null, tail = null;

    void push(int el, int pr) {
        node nnode = new node(el, pr);
        if (head == null) {
            nnode.next = null;
            head = tail = nnode;
        } else if (pr < head.priority) {
            nnode.next = head;
            head = nnode;
        } else if (pr > tail.priority) {
            nnode.next = null;
            tail.next = nnode;
            tail = nnode;
        } else {
            node temp = head;
            while (temp.next != null) {
                if (temp.next.priority > pr)
                    break;
                temp = temp.next;
            }
            nnode.next = temp.next;
            temp.next = nnode;
        }
    }

    void pop() {
        if (head == null)
            System.out.println("Empty Queue");
        else
            head = head.next;
    }

    void display() {
        if (head == null)
            System.out.println("Empty List");
        else {
            node temp = head;
            System.out.println("Current Queue Items Are: (Data | Priority)");
            while (temp != null) {
                System.out.println(temp.info + " | " + temp.priority);
                temp = temp.next;
            }
            System.out.println();
        }
    }
}

class priorityQueueLL {
    public static void main(String[] args) {
        priorityQueue p = new priorityQueue();
        p.display();
        p.push(2, 5);
        p.push(22, 2);
        p.push(15, 3);
        p.push(4, 1);
        p.display();
        p.pop();
        p.display();
    }
}
