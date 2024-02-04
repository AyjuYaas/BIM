class node {
    int info;
    node prev, next;

    node(int el) {
        this(null, el, null);
    }

    node(node prevNode, int el, node nextNode) {
        prev = prevNode;
        info = el;
        next = nextNode;
    }
}

class doublyLinkedLists {
    node head = null, tail = null;

    void addFromHead(int el) {
        node newNode;
        System.out.println(el + " is added from head");
        if (head == null) {
            newNode = new node(el);
            head = tail = newNode;
        } else {
            newNode = new node(null, el, head);
            head.prev = newNode;
            head = newNode;
        }
    }

    void addFromTail(int el) {
        node newNode;
        System.out.println(el + " is added from tail");
        if (head == null) {
            newNode = new node(el);
            head = tail = newNode;
        } else {
            newNode = new node(tail, el, null);
            tail.next = newNode;
            tail = newNode;
        }
    }

    void addAtPos(int el, int pos) {
        int size = traverse();
        node newNode;
        if (head == null && pos != 1)
            System.out.println("No List Exists");

        else if (pos <= 0 || pos > size + 1)
            System.out.println("Position out of bound");

        else {
            if (pos == 1)
                addFromHead(el);
            else if (pos == size + 1)
                addFromTail(el);
            else {
                System.out.println(el + " is added at pos: " + pos);
                int count = 2;
                node temp = head;
                while (count < pos) {
                    temp = temp.next;
                }
                newNode = new node(temp, el, temp.next);
                temp.next = newNode;
                newNode.next.prev = newNode;
            }
        }
    }

    void deleteFromHead() {
        if (head == null)
            System.out.println("No List Found");

        else {
            System.out.println(head.info + " is removed from head");

            if (head == tail)
                head = tail = null;

            else {
                head = head.next;
                head.prev = null;
            }
        }
    }

    void deleteFromTail() {
        if (head == null)
            System.out.println("No List Found");

        else {
            System.out.println(tail.info + " is removed from tail");

            if (head == tail)
                head = tail = null;

            else {
                tail = tail.prev;
                tail.next = null;
            }
        }
    }

    void deleteAtPos(int pos) {
        int size = traverse();
        if (head == null)
            System.out.println("No List");

        else if (head == tail)
            head = tail = null;

        else {
            if (pos == 1)
                deleteFromHead();
            else if (pos == size)
                deleteFromTail();
            else {
                int count = 2;
                node temp = head;
                while (count < pos) {
                    temp = temp.next;
                    count++;
                }
                System.out.println(temp.next.info + " is removed from pos: " + pos);
                temp.next = temp.next.next;
                temp.next.prev = temp;
            }
        }
    }

    void search(int el) {
        int count = 1;
        node temp = head;
        while (temp != null) {
            if (temp.info == el) {
                System.out.println(el + " Found at pos " + count);
                break;
            }
            temp = temp.next;
            count++;
        }
        if (temp == null)
            System.out.println(el + " Not Found on the list");
    }

    int traverse() {
        int count = 0;
        node temp = head;
        while (temp != null) {
            temp = temp.next;
            count++;
        }
        return count;
    }

    void display() {
        node temp = head;
        System.out.println("Current Items on List");
        while (temp != null) {
            System.out.print(temp.info + " ");
            temp = temp.next;
        }
        System.out.println("\n");
    }
}

public class doublyLinked {
    public static void main(String[] args) {
        doublyLinkedLists d = new doublyLinkedLists();
        d.addFromHead(1);
        d.addFromTail(2);
        d.addFromTail(3);
        d.addFromTail(4);
        d.addAtPos(33, 2);
        d.display();

        d.search(12);

        d.deleteFromHead();
        d.deleteFromTail();
        d.display();

        d.deleteAtPos(2);
        d.display();
    }
}
