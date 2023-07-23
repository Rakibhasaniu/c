#include <stdio.h>

void extract_word(char grid[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (grid[j][i] != '.') {
                putchar(grid[j][i]);
            }
        }
    }
    putchar('\n');
}

int main() {
    int t;
    scanf("%d", &t);
    getchar(); // consume the newline after t

    for (int case_num = 0; case_num < t; case_num++) {
        char grid[8][8];

        // Read the grid for each test case
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                scanf("%c", &grid[i][j]);
            }
            getchar(); // consume the newline after each row
        }

        // Process and print the word for the current test case
        extract_word(grid);
    }

    return 0;
}
