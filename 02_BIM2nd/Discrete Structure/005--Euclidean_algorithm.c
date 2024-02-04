#include<stdio.h>

void main()
{
    int r, x, y, temp;

    printf("Enter the two values: ");
    scanf("%d %d", &x, &y);
    if(x<y){
       temp = y; 
       y = x; 
       x = temp; 
    }
    while(y!=0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    printf("The GCD: %d", x);
}