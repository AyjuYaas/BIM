#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("\nEnter the total number of subjects: ");
    scanf("%d", &n);
    
    float *ptr;
    ptr = (float*)malloc(n*sizeof(float));

    int i;
    printf("Enter the marks for: (Full Marks = 100)\n");
    for(i=0; i<n; i++){
        printf("Subject %d: ", i+1);
        scanf("%f", ptr+i);
    }

    float sum = 0, per;
    for(i=0; i<n; i++){
        sum += *(ptr+i);
    }
    per = (sum/(float)n);

    printf("\nTotal Marks = %.2f\nPercentage = %.2f%%", sum, per);

    return 0;
}