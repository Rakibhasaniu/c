#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0]; // Initialize min with the first element
    *max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }

        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[n];
    scanf("%d",&n);
    int size = sizeof(arr) / sizeof(arr[0]);

    int min, max;
    findMinMax(arr, size, &min, &max);

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}
