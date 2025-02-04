#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0){
        printf("Divisible by 3");
    }
    else if(a%5==0){
        printf("Divisible by 5");

    }
    else if(a%3==0 && b%5==0){
        printf("Both");
    }
    else{
        printf("Not Divisible");
    }
}