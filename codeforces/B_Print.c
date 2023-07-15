#include <stdio.h>

void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        if (i != N) {
            printf("%d ", i);
        } else {
            printf("%d", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
   
    scanf("%d", &num);

    printNumbers(num);

    return 0;
}
