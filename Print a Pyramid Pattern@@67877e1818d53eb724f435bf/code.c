#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(k=0;k<=rows-i;k++){
            printf(" ");
        }
       
       for(j=0;j<2*i-1;j++){
        printf("*")
       }
       printf("\n")
    }
}