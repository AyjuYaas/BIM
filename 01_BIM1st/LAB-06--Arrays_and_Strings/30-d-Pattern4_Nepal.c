/* Pattern 4
N
NEP
NEPAL
*/

#include<stdio.h>
int main(){
    char a[6] = "NEPAL";
    int i, j;
    
    for(i=0; i<3; i++){
        for(j=0; j<(2*i+1); j++){
            printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;

}