#include <stdio.h>

int sumArray(int arr[], int N) {
    if (N <= 0) {
        return 0; // Base case: return 0 when the array is empty
    } else {
        return arr[N - 1] + sumArray(arr, N - 1); // Recursively add elements from the last to the first
    }
}

int main() {
    int N;
   
    scanf("%d", &N);

    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumArray(arr, N);
    printf("%d\n", sum);

    return 0;
}
