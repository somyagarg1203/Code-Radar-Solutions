#include<stdio.h>
int main(){
    float radius,area;
    float PI=3.14;
    scanf("%f",&radius);
    area= PI*radius*radius;
    printf("Area: %.2f",area);
    return 0;
}