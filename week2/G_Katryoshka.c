#include <stdio.h>
#include <math.h>

int maxKarryoshkas(int eyes, int mouths, int bodies) {
    int combination1 = eyes / 2;  // Two eyes and one body
    int combination2 = eyes / 2;  // Two eyes, one mouth, and one body
    int combination3 = eyes;      // One eye, one mouth, and one body

    int max = fmax(fmax(combination1, combination2), combination3);
    return max;
}

int main() {
    int n, m, k;
    // printf("Enter the number of eyes: ");
    scanf("%d", &n);
    // printf("Enter the number of mouths: ");
    scanf("%d", &m);
    // printf("Enter the number of bodies: ");
    scanf("%d", &k);

    int maxKatryoshkas = maxKarryoshkas(n, m, k);

    
    // printf("The maximum number of Katryoshkas the king can make is: %d\n", maxKatryoshkas);
    printf("%d\n", maxKatryoshkas);

    return 0;
}
