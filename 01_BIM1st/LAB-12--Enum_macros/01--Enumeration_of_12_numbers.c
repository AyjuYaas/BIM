#include<stdio.h>

enum months {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main(){
    enum months m;
    m = Feb;
    printf("\nIndex of Feb is %d", m);
    
    m = Aug;
    printf("\nIndex of Aug is %d", m);

    return 0;
}