public class S04_mergeSort {
    static void mergeSort(int arr[], int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);

            // Then Finally Merge
            merge(arr, low, mid, high);
        }
    }

    static void merge(int[] arr, int low, int middle, int high) {
        int[] temp = new int[high + 1];
        int i = low;
        int j = middle + 1;
        int k = low;
        while (i <= middle && j <= high) {
            if (arr[i] <= arr[j]) {
                temp[k] = arr[i];
                i++;
            } else {
                temp[k] = arr[j];
                j++;
            }
            k++;
        }
        // This is for remaining values if one of the sub arrays goes out of bounds
        if (i > middle) {
            while (j <= high) {
                temp[k] = arr[j];
                j++;
                k++;
            }
        } else {
            while (i <= middle) {
                temp[k] = arr[i];
                i++;
                k++;
            }
        }

        for (i = low; i <= high; i++) {
            arr[i] = temp[i];
        }
    }

    public static void main(String[] args) {

        int[] arr = { 22, 1, 2, 55, 123, 11, 556, 90 };
        mergeSort(arr, 0, arr.length - 1);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
