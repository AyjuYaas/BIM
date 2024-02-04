#include<stdio.h>

enum days {Sun, Mon, Tue, Wed, Thu, Fri, Sat}m;

int main(){

    m = Sun;
    printf("\nIndex of Sun is %d", m);
    m = Fri;
    printf("\nIndex of Fri is %d", m);

    return 0;
}