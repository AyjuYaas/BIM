/* Bubble Sorting */
#include<stdio.h>
int main(){

    int n;
    printf("\nEnter the number of elements in an array: ");
    scanf("%d", &n);
    int a[n], i, j, temp, flag;

    printf("Enter the Elements:\n");
    for(i=0; i<n; i++){
        printf("%d) ", i+1);
        scanf("%d", &a[i]);
    }

    do{
        flag = 0;
        for(i=0; i<(n-1); i++){
            j = i+1;
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                flag++;
            }
        }
    }while(flag != 0);

    printf("\nThe Ascneding order Sorting:\n");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}