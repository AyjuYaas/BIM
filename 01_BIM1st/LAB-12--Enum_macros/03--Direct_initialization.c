#include<stdio.h>

enum traffic_light{red = 0, yellow = 0, green = 1};

int main(){
    enum traffic_light t, t1, t2;

    t = red;
    t1 = yellow;
    t2 = green;
    printf("Index of red = %d, yellow = %d, green = %d", t, t1, t2);

    return 0;
}