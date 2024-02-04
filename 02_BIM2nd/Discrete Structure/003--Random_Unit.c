#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void main(){
    int num, max, min, i, a;
    printf("\nHow many random numbers: ");
    scanf("%d", &num);
    printf("Enter the range: ");
    scanf("%d %d", &min, &max);
    int nums[num];
    srand(time(0));
    printf("\nRandom Numbers:\n");
    for(i=1; i<=num; i++){
        nums[i] = (rand() % (max - min)) + min;
        printf("%d\t", nums[i]);
    }
}