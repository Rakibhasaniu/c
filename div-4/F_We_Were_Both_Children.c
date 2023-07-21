#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int* hops = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &hops[i]);
        }

        int max_frogs_caught = 1;
        int total_frogs = 0;
        int* count = (int*)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            total_frogs += hops[i];
            count[i] = total_frogs - i - 1;
            max_frogs_caught = max(max_frogs_caught, count[i]);
        }

        printf("%d\n", max_frogs_caught);

        free(hops);
        free(count);
    }

    return 0;
}
