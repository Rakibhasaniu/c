#include <stdio.h>

void sort(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int sortedA = A, sortedB = B, sortedC = C;
    sort(&sortedA, &sortedB, &sortedC);
    
    printf("%d\n%d\n%d\n\n", sortedA, sortedB, sortedC);
    
    printf("%d\n%d\n%d\n", A, B, C);
    
    return 0;
}
