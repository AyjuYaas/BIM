#include<stdio.h>
#include<math.h>
#define pi 3.145

float cir(float), area(float, float), vol(float, float);

int main(){
    float r, h;
    printf("\nEnter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height: ");
    scanf("%f", &h);

    printf("Circumference of base = %.2f", cir(r));
    printf("\nArea = %.2f", area(r, h));
    printf("\nVolume = %.2f", vol(r, h));

    return 0;
}

float cir(float r){
    float c = 2.0*pi*r;
    return c;
}
float area(float r, float h){
    float a = (2.0*pi*r)*(h+r);
    return a;
}
float vol(float r, float h){
    float v = pi*pow(r, 2)*h;
    return v;
}
