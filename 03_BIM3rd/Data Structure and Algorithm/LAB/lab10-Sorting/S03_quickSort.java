public class S03_quickSort {

    static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int swapPosition = (low - 1);
        int temp = 0;
        for (int i = low; i < high; i++) {
            if (arr[i] < pivot) {
                swapPosition++;
                // swapping
                temp = arr[swapPosition];
                arr[swapPosition] = arr[i];
                arr[i] = temp;
            }
        }
        // swapping pivot to it's original position
        int realPosition = swapPosition + 1;
        temp = arr[realPosition];
        arr[realPosition] = arr[high];
        arr[high] = temp;

        return realPosition;
    }

    static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int partitionIndex = partition(arr, low, high);

            quickSort(arr, low, partitionIndex - 1);
            quickSort(arr, partitionIndex + 1, high);
        }
    }

    public static void main(String[] args) {

        int[] arr = { 22, 1, 2, 55, 123, 11, 556, 90 };
        quickSort(arr, 0, arr.length - 1);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

}
