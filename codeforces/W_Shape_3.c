#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=(2*n)-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<=n-1){
            s--;
            k=k+2;
        } else {
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int N;
    
//     scanf("%d", &N);

//     int i, j;

//     // Upper half of the diamond
//     for (i = 1; i <= N; i++) {
//         for (j = 1; j <= N - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Lower half of the diamond
//     for (i = N - 1; i >= 1; i--) {
//         for (j = 1; j <= N - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
