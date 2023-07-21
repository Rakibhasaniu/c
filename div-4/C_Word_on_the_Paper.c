#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char grid[8][8];
        for (int i = 0; i < 8; i++) {
            scanf("%s", grid[i]);
        }

        for (int j = 0; j < 8; j++) {
            for (int i = 0; i < 8; i++) {
                if (grid[i][j] >= 'a' && grid[i][j] <= 'z') {
                    putchar(grid[i][j]);
                }
            }
        }
        putchar('\n');
    }

    return 0;
}
