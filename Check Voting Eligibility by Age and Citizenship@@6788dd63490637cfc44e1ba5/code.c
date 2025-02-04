#include <stdio.h>
int main(){
    int a,status;
    scanf("%d %d",&a,&status);
    if(status==1){
        if(a>=18){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
        else{
            printf("No Eligible");
        }
    }
   
    
}