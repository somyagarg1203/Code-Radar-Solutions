#include <stdio.h>
void Square(int N) {
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
    Square(N);
    return 0;
}