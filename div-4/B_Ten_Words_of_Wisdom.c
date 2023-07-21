#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int max_quality = 0;
        int winner_index = 0;

        for (int i = 1; i <= n; i++) {
            int words, quality;
            scanf("%d %d", &words, &quality);

            if (words <= 10 && quality > max_quality) {
                max_quality = quality;
                winner_index = i;
            }
        }

        printf("%d\n", winner_index);
    }

    return 0;
}
