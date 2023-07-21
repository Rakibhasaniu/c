#include <stdio.h>

typedef long long ll;

typedef struct {
    ll x, y;
} Point;

// Function to find the direction vector between two points
Point directionVector(Point p1, Point p2) {
    return (Point){p2.x - p1.x, p2.y - p1.y};
}

// Function to check if two direction vectors are parallel
int isParallel(Point v1, Point v2) {
    return v1.x * v2.y == v1.y * v2.x;
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

        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                Point dir = directionVector(points[i], points[j]);

                // Check if the direction vector is one of the eight valid compass directions
                if (isParallel(dir, (Point){1, 0}) || isParallel(dir, (Point){-1, 0}) ||
                    isParallel(dir, (Point){0, 1}) || isParallel(dir, (Point){0, -1}) ||
                    isParallel(dir, (Point){1, 1}) || isParallel(dir, (Point){1, -1}) ||
                    isParallel(dir, (Point){-1, 1}) || isParallel(dir, (Point){-1, -1})) {
                    count++;
                }
            }
        }

        printf("%d\n", count*2);
    }

    return 0;
}
