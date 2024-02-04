/* Selection Sorting */
#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the number of elements of an array: ");
    scanf("%d", &n);
    int a[n], i, j, k, temp, small, flag;

    printf("Enter the Elements for the array:\n");
    for(i=0; i<n; i++){
        printf("%d. ", i+1);
        scanf("%d", &a[i]);
    }

    for (i=0; i<(n-1); i++){
        small = a[i];
        flag = 0;
        for(j=i; j<=(n-1); j++){
            if (small>a[j]){
                small = a[j];
                k = j;
                flag = 1;
            }
        }

        if (flag == 1){
            temp = a[i];
            a[i] = small;
            a[k] = temp;
        }
    }

    printf("\nThe Ascending Order:\n");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}