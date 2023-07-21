#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int difficulties[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &difficulties[i]);
        }

        // Sort the difficulties in ascending order
        qsort(difficulties, n, sizeof(int), compare);

        int max_subsequence_length = 1;
        int current_subsequence_length = 1;

        for (int i = 1; i < n; i++) {
            if (difficulties[i] - difficulties[i - 1] <= k) {
                current_subsequence_length++;
            } else {
                if (current_subsequence_length > max_subsequence_length) {
                    max_subsequence_length = current_subsequence_length;
                }
                current_subsequence_length = 1;
            }
        }

        if (current_subsequence_length > max_subsequence_length) {
            max_subsequence_length = current_subsequence_length;
        }

        int min_problems_to_remove = n - max_subsequence_length;
        printf("%d\n", min_problems_to_remove);
    }

    return 0;
}
