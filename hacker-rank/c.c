#include <stdio.h>

void calculateSumOfEvenAndOddNumbers(int numbers[], int size, int *evenSum, int *oddSum) {
    *evenSum = 0;
    *oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            *evenSum += numbers[i];
        } else {
            *oddSum += numbers[i];
        }
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int numbers[N];
    printf("Enter the numbers separated by space: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int evenSum, oddSum;
    calculateSumOfEvenAndOddNumbers(numbers, N, &evenSum, &oddSum);

    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
