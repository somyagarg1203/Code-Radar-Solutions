#include <stdio.h>
#include <string.h>
void reverseString(char str[]){
    int n= strlen(str);
    for (int i=0; i<n/2; i++){
        char temp= str[i];
        str[i]= str[n-i-1];
        str[n-i-1]= temp;
    }
}
int main(){
    char str[100];
    gets(str);
    reverseString(str);
    printf("%s\n",str);
    return 0;
}