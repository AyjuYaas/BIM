class sorting {
    static int[] arr = { 12, 5, 10, 2, 4, 1 };

    static void bubbleSort() {
        int[] temp = arr.clone();
        int flag = 0;
        int j, t;
        do {
            flag = 0;
            for (int i = 0; i < (temp.length - 1); i++) { // 0 to n-1
                j = i + 1;
                if (temp[i] > temp[j]) {
                    t = temp[j];
                    temp[j] = temp[i];
                    temp[i] = t;
                    flag = 1;
                }
            }
        } while (flag == 1);

        System.out.println("Bubble Sort:");
        for (int i = 0; i < temp.length; i++) {
            System.out.print(temp[i] + " ");
        }
        System.out.println("\n");
    }

    static void selectionSort() {
        int[] temp = arr.clone();
        int small, p = 0, t;
        for (int i = 0; i < (temp.length - 1); i++) { // i = 0 to n-2
            small = temp[i];
            p = i;
            for (int j = i + 1; j < temp.length; j++) { // j = i to n-1
                if (small > temp[j]) {
                    small = temp[j];
                    p = j;
                }
            }
            t = temp[p];
            temp[p] = temp[i];
            temp[i] = t;
        }
        System.out.println("Selection Sort:");
        for (int i = 0; i < temp.length; i++) {
            System.out.print(temp[i] + " ");
        }
        System.out.println("\n");
    }

    static void insertionSort() {
        int[] temp = arr.clone();
        int t = 0;
        for (int i = 1; i < temp.length; i++) { // i = 0 to n-1
            t = temp[i];
            int j = i - 1;
            while (j >= 0 && temp[j] > t) {
                temp[j + 1] = temp[j];
                j--;
            }
            temp[j + 1] = t;
        }
        System.out.println("Insertion Sort:");
        for (int i = 0; i < temp.length; i++) {
            System.out.print(temp[i] + " ");
        }
        System.out.println("\n");
    }

    public static void main(String[] args) {
        bubbleSort();
        selectionSort();
        insertionSort();
    }
}