class priorityQueue{
    final int MAX = 5;
    int[] arr = new int[MAX];
    int front = -1, rear = -1;

    boolean isFull(){
        if(rear == MAX) return true;
        return false;
    }
    boolean isEmpty(){
        if(front == -1) return true;
        return false;
    }

    void enQueue(int el){
        if(isFull()) System.out.println("Queue is Full");
        else {
            if (front == -1){
                front = 0;
                arr[++rear] = el;
            }
            else{
                int i;
                for(i = rear; i>=front; i--){
                    if(el < arr[i]) arr[i+1] = arr[i];
                    else break;
                }
                arr[i+1] = el;
                rear++;
            }
            System.out.println(el + " is inserted");
        }
    }

    void deQueue(){
        if(isEmpty()) System.out.println("Queue is Empty");
        else {
            System.out.println(arr[front] + "is removed");
            front--;
        }
    }

    void display(){
        if(isEmpty()) System.out.println("Cannot Display, Empty Queue");
        else{
            System.out.println("Current Queue Elements:");
            for(int i = front; i<=rear; i++){
                System.out.print(arr[i] + "\t");
            }   
            System.out.println("\n");
        }
    }
}

public class priorityQueueArr {
    public static void main(String[] args) {
        priorityQueue p = new priorityQueue();
        p.enQueue(12);
        p.enQueue(5);
        p.enQueue(16);
        p.enQueue(1);

        p.display();
    }    
}
