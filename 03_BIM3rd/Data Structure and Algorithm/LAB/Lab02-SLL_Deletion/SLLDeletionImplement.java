class node{
    int info;
    node next;
    node(int el){
        info = el;
        next = null;
    }
}

class SLLDeletion{
    node head = null, tail = null;
    void deleteFromHead(){
        if (head == null) System.out.println("Empty List");
        else if(head == tail) head = tail = null;
        else head = head.next;
    }

    void deleteFromTail(){
        if (head == null) System.out.println("Empty List");
        else if(head == tail) head = tail = null;
        else{
            node temp = head;
            while(temp.next != tail){
                temp = temp.next;
            }
            temp.next = null;
            tail = temp;
        }
    }

     void deleteAtPos(int pos){
        if(head == null) System.out.println("No List Found");

        else if(head==tail && pos == 1) head = tail = null;
        
        else if(pos == 1) deleteFromHead();
        
        else{
            int count = 2, flag = 0;
            node temp = head;
            while(temp != null){
                if(count == pos){
                    temp.next = temp.next.next;
                    flag = 1; break;
                }
                count++; 
                temp = temp.next;
            }
            if(flag == 0){
                System.out.println("Position Out of Index");
            }
            else if(temp.next == null){
                tail = temp;
            }
        }
    }

    void search(int key){
        if (head == null) System.out.println("Empty List");
        else{
            node temp = head;
            int count = 1, flag = 0;
            while(temp!=null){
                if(temp.info == key){
                     System.out.println("Found at Pos: "+count);
                     flag =1;
                     break;
                }
                temp = temp.next;
                count++;
            }
            if(flag == 0){
                System.out.println("Not Found");
            }
        }
    }

    // YESPAXI KO CODE SARNA PARDAINA UPTO NEXT COMMMENT
    void addFromHead(int info){
        node newNode = new node(info);
        if(head == null){
            newNode.next = null;
            head = tail = newNode;
        }
        else{
            newNode.next = head;
            head = newNode;
        }
    }

    void addFromTail(int info){
        node newNode = new node(info);
        if(head == null){
            newNode.next = null;
            head = tail = newNode;
        }
        else{
            tail.next = newNode;
            tail = newNode;
        }
    }

    void addAtPos(int info, int pos){
        node newNode = new node(info);
        if(head == null){
            if(pos == 1) addFromHead(info);
            else System.out.println("No List Found and Invalid Position");
        }
        else if(pos == 1) addFromHead(info);

        else{
            int count = 2, flag = 0;
            node temp = head;
            while(temp!=null && count<=pos){
                if(count == pos){
                    newNode.next = temp.next;
                    temp.next = newNode;
                    flag = 1;
                }
                temp = temp.next;
                count++;
            }
            if(newNode.next == null) tail = newNode;

            if(flag == 0) System.out.println("Invalid Position");
        }
    }

    void display(){
        if(head == null) System.out.println("No List Found");
        else{
            node temp = head;
            while(temp != null){
                System.out.print(temp.info + "\t");
                temp = temp.next;
            }
            System.out.println();
        }
    }
    // YA SAMMA 
}

class SLLDeletionImplement{
    public static void main(String[] args) {
        SLLDeletion l = new SLLDeletion();
        l.addFromHead(10);
        l.addFromHead(12);
        l.addFromHead(44);
        l.addFromTail(22);
        l.addFromTail(5);
        l.addFromTail(25);
        l.addFromTail(102);
        l.addFromTail(56);
        l.display(); 
        
        l.deleteFromHead();
        System.out.println("After Deleting From Head");
        l.display();

        l.deleteFromTail();
        System.out.println("After Deleting From Tail");
        l.display();

        l.deleteAtPos(3);
        System.out.println("Deleting at 3rd Position");
        l.display();

        System.out.println("Search for 103");
        l.search(103);

        System.out.println("Search for 5");
        l.search(5);
    }
}