#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    
    // Reading input values into the array A
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Printing even-indexed values in reverse order with space separation
    for(int i = n - 1; i >= 0; i--) {
        if(i % 2 == 0) {
            printf("%d ", A[i]);
        }
    }
    
    return 0;

}
