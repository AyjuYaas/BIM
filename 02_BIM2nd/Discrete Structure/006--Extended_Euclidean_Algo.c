#include<stdio.h>
void calculation(int, int);
int *gcd, *fx, *fy;
void main()
{
    int a, b;
    printf("Enter the two values (a & b): ");
    scanf("%d %d", &a, &b);
    
    calculation(a, b);
    printf("GCD: %d\nThe eqn: a%d+b%d", *gcd, *fx, *fy);
}
void calculation(int a1, int b1)
{ 
    static int a, b, x1 = 1, y1 = 0;
    a = a1; b = b1;
    int r, q, x, x2 = 0, y, y2 = 1;
    if(b==0)
    {
        gcd = &a;
        *fx = 1;
        *fy = 0;
    }
    else
    {
        while(b>0)
        {
            q = a / b;
            r = a - (q * b);
            x = x1 - (q * x2);
            y = y1 - (q * y2);
            a = b;
            b = r;
            x1 = x2;
            x2 = x;
            y1 = y2;
            y2 = y;
        }
        gcd = &a;
        fx = &x1;
        fy = &y1;
    }
}