#include <stdio.h>

void printSquarePattern(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int N;
   
    scanf("%d", &N);

    printSquarePattern(N);

    return 0;
}