/* Pattern 2
NEPAL
NEPA
NEP
NE
N
*/

#include<stdio.h>
int main(){
    char a[6] = "NEPAL";
    int i, j;

    for(i=4; i>=0; i--){
        for(j=0; j<=i; j++){
            printf("%c", a[j]);
        }
        printf("\n");
    }

    return 0;
}