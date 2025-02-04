#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=18&&a==1){
        printf("Eligible");
        if(a<18&&a==0){
            printf("Not Eligible");
        }
    }
    
}