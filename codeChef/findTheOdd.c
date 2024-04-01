#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Input number of dolls

        int types[100001] = {0}; // Array to count occurrences of each type of doll

        for (int i = 0; i < N; i++) {
            int type;
            scanf("%d", &type);
            types[type]++; // Increment count of the type of doll
        }

        // Loop through the types array to find the type with an odd count
        for (int i = 0; i <= 100000; i++) {
            if (types[i] % 2 != 0) { // If count is odd
                printf("%d\n", i); // Print the type
                break;
            }
        }
    }

    return 0;
}
