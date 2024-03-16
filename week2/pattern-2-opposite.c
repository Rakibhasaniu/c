#include<stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = 0; // Start with 0 spaces
    k = n; // Start with maximum stars
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        s++;
        k = k - 2;
        printf("\n");
    }

    return 0;
}
