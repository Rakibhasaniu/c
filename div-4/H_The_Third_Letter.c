#include <stdio.h>
#include <stdbool.h>

typedef long long ll;

typedef struct {
    ll x, y;
} Point;

// Function to check if two points have a valid direction vector
bool hasValidDirection(Point p1, Point p2) {
    ll dx = p2.x - p1.x;
    ll dy = p2.y - p1.y;

    return (dx == 0 || dy == 0 || dx == dy || dx == -dy);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        Point points[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld %lld", &points[i].x, &points[i].y);
        }

        bool found = false;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (!hasValidDirection(points[i], points[j])) {
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        if (found) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}
