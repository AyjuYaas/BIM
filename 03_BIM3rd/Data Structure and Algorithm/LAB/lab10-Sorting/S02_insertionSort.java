public class S02_insertionSort {
    static void insertionSort(int[] arr) {
        int i, j;

        for (i = 1; i < arr.length; i++) {
            int key = arr[i];
            for (j = i - 1; j >= 0; j--) {
                if (key < arr[j]) {
                    arr[j + 1] = arr[j];
                    continue;
                }
                break;
            }
            arr[j + 1] = key;
        }
    }

    public static void main(String[] args) {

        int[] arr = { 22, 1, 2, 55, 123, 11, 556, 90 };
        insertionSort(arr);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
