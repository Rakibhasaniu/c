#include <stdio.h>

void compareTriplets(int a[], int b[]) {
    int alice_score = 0, bob_score = 0;
    
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice_score++;
        } else if (a[i] < b[i]) {
            bob_score++;
        }
    }
    
    printf("%d %d\n", alice_score, bob_score);
}

int main() {
    int a[3], b[3];
    
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    
    scanf("%d %d %d", &b[0], &b[1], &b[2]);
    
    compareTriplets(a, b);
    
    return 0;
}
