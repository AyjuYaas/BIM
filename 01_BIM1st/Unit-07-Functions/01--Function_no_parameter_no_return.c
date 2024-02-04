#include<stdio.h>

void add();
void sub();
void mul();
void div();
void calculation();

int main(){

    calculation();

    return 0;
}

void calculation(){
    int choose;

    re:
    printf("1 = Add\n2 = Subtract\n3 - Multiply\n4 - Divide\nChoose: ");
    scanf("%d", &choose);

    switch(choose){
        case 1:
            add();
            break;
        
        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            div();
            break;

        default:
            printf("\nInvalid Input Try again!!\n");
            goto re;
    }
}

void add(){
    int x, y, sum;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    sum = x + y;
    printf("The sun is %d", sum);
}

void sub(){

    int x, y, sub;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    sub = x-y;
    printf("The Difference is %d", sub);
}

void mul(){
    int x, y, mul;

    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    mul = x*y;
    printf("The Product is %d", mul);
}

void div(){
    int x, y;
    float div;

    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    div = (float)x/(float)y;
    printf("The division is %f", div);
}