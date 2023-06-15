// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d",&N);
//      if (N <= 0) {
//         for (int i = N; i >= 1; i--) {
//             printf("%d ", i);
//         }
//     } else {
//         for (int i = 1; i <= N; i++) {
//             printf("%d ", i);
//         }
//     }
//         printf("\n");

//     return 0;
// }
#include <stdio.h>

void printSequence(int N) {
    if (N <= 0) {
        for (int i = N; i >= 1; i--) {
            printf("%d ", i);
        }
    } else {
        for (int i = 1; i <= N; i++) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter an integer: ");
    scanf("%d", &N);

    printSequence(N);

    return 0;
}
