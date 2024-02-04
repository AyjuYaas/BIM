/* Using malloc() to allocate array of integers dynamically for calculating the total
    of N number of subjects of a student and display Percentage */

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i, *ptr;

    printf("Enter the number of subjects:\n");
    scanf("%d", &n);

    // ptr[n];
    ptr = (int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        printf("Enter the marks of %d subject: ", (i+1));
        scanf("%d", ptr+i);
    }

    int sum = 0;
    for(i=0; i<n; i++){
        sum = sum + *(ptr+i);
    }

    printf("Total Marks obtained is %d\n", sum);
    printf("Percentage obtained is %f\n", (float)sum/(float)n);

    free(ptr);
    return 0;
}