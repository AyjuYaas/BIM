#include<stdio.h>

void main(){
    int n = 7;
    int per[7] = {1, 2, 3, 4, 5, 6, 7};
    int x, y, j;
    
    //Step 1: finding x, if last-1 < last element; x = last-1
    for(int i=(n-1); i>=1; i--){
        j = i - 1;
        if(per[j] < per[i]){
            x = j;
            break;
        }
    }
    
    //Step 2: finding y, for t = x+1 to last element, if x > t, y = t-1
    int flag = 0;
    for(int i = (x+1); i<n; i++){
        if(per[x] > per[i]){
            y = i-1;
            flag = 1;
        }
    }
    if (flag == 0){
        y = (n-1); //last element
    }
   
    //step 3: swapping x and y
    int temp =  per[x];
    per[x] = per[y];
    per[y] = temp;

    //step 4: Reversing the order from x+1 to final element
    j = n;
    int term = (((n-1) - (x+1))/2) + (x+1);
    for(int i = (x+1); i<=term; i++){
        j--;
        temp = per[i];
        per[i] = per[j];
        per[j] = temp;
    }

    printf("The Next Permutation is:\n");
    for(int i = 0; i<n; i++){
        printf("%d ", per[i]);
    }
}