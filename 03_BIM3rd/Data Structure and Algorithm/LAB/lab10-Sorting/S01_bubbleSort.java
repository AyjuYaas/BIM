class S01_bubbleSort {
    static void bubbleSort(int[] arr) {
        int length = arr.length;
        int temp = 0;
        int flag = 0;
        do {
            flag = 0;
            for (int i = 0; i < length - 1; i++) {
                int j = i + 1;
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    flag = 1;
                }
            }
        } while (flag == 1);
    }

    public static void main(String[] args) {

        int[] arr = { 22, 1, 2, 55, 123, 11, 556, 90 };
        bubbleSort(arr);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}