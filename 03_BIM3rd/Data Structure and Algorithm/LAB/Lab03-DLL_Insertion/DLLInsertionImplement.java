class node{
    int info;
    node next, prev;
    node(int el){
        info = el;
        next = prev = null;
    }
}

class DLLInsertion{
    node head = null, tail = null;
    
    void addFromHead(int el){
        node newNode = new node(el);
        if(head==null){
            newNode.prev = newNode.next = null;
            head = tail = newNode;
        }
        else{
            head.prev = newNode;
            newNode.next = head;
            newNode.prev = null;
            head = newNode;
        }
    }

    void addFromTail(int el){
        node newNode = new node(el);
        if(head == null){
            newNode.prev = newNode.next = null;
            head = tail = newNode;
        }
        else{
            tail.next = newNode;
            newNode.prev= tail;
            newNode.next=null;
            tail = newNode;
        }
    }

    void addAtPos(int pos, int el){
        int size = traverse();
        if(pos<=0 || pos>size+1) System.out.println("Invalid Position");
        else if (head == null && pos != 1) System.out.println("Empty List");
        else{
            if(pos == 1) addFromHead(el);
            else if(pos == size+1) addFromTail(el);
            else{
                node newNode = new node(el);
                node temp = head;
                int count = 2;
                while(count != pos){
                    count++;
                    temp = temp.next;
                }
                newNode.prev = temp;
                newNode.next = temp.next;
                temp.next = newNode;
                newNode.next.prev = newNode;
            }
        }
    }

    int traverse(){
        node temp = head;
        int count = 0;
        while(temp != null){
            count++;
            temp = temp.next;
        }
        return count;
    }

    void display(){
        if(head==null) System.out.println("Empty List");
        else{
            node temp = head;
            while(temp != null){
                System.out.print(temp.info + "\t");
                temp = temp.next;
            }
        }
    }
}

class DLLInsertionImplement{
    public static void main(String[] args) {
        DLLInsertion d = new DLLInsertion();
        d.display();

        d.addFromHead(2);
        d.addFromTail(5);
        d.addFromHead(1);
        d.addAtPos(3, 3);
        System.out.println("\nAfter Adding on the list:");
        d.display(); 
    }
}