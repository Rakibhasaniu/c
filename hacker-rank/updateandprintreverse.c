#include <stdio.h>

int main() {
    int N, X, V;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d %d", &X, &V);

    // Change the value of X'th index to V
    A[X] = V;

    // Print the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", A[i]);
    }

    return 0;
}
