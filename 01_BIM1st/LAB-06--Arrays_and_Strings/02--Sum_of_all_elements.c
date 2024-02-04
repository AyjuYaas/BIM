/*Sum of all Elements of array */

#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the number of elements in an array: ");
    scanf("%d", &n);
    int a[n], sum = 0, i;

    printf("Enter the Elements:\n");
    for(i=0; i<n; i++){
        printf("%d) ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        sum += a[i];
    }

    printf("Sum of Elements: %d", sum);
    return 0;
}