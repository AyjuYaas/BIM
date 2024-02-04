#include<stdio.h>
void search(int x[], int);

int main(){
    int se, a[10] = {11, 21, 33, 67, 89, 44, 79, 101, 500, 233};

    printf("\nEnter the number to be searched: ");
    scanf("%d", &se);
    search(a, se);
    return 0;
}

void search(int x[], int s){
    int i, flag = 0;

    for(i=0; i<10; i++){
        if (s == x[i]){
            printf("Yes, it is on the list on position a[%d]", i);
            flag++;
        }
    }
    if(flag == 0){
        printf("No, it is not on the list");
    }

}
