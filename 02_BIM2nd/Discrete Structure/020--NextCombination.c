#include<stdio.h>

void nextCombination(int n, int r, int *a){
    int i = r, p;
    int j = i-1; //index
    while (a[j] == n-r+i){
        j--; i--;
        if(j==-1){
            printf("Highest Possible Combination");
            return;
        }
    }
    a[j] = a[j] + 1;
    for(int k = i+1; k<=r; k++){
        p=k-1;
        a[p] = a[j] + k - i;
    }
    for(i=0; i<r; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void main(){
    int n, r;
    int nxt[4] = {1, 2, 3, 4};
    n = 6; r = 4;
    nextCombination(n, r, nxt); 
    
}
