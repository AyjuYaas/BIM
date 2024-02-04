/* Pattern 
N
NE
NEP
NEPA
NEPAL
*/

#include<stdio.h>
int main(){
    char a[6] = "NEPAL";
    int i ,j;
    
    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){
            printf("%c", a[j]);
        }
        printf("\n");
    }

    return 0;
}