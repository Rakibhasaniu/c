#include <stdio.h>

int fun(int a, int b, int c) {
    int digits[3] = {a, b, c};
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (digits[i] + digits[j] >= 10) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (fun(a, b, c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
