// #include<stdio.h>

// int main()
// {
//     int n,s,k;
//     scanf("%d",&n);
//     s=0;
//     k=n;
//     for (int i = n; i >= 1; i--)
//     {
//         for(int j=1;j<=s;j++){
//             printf(" ");
//         }
//         for(int j=1;j>=1;j--){
//             printf("*");
//         }
//         s++;
//         k=k-2;
//         printf("\n");
        

//     }
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int rows, spaces, stars;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        // Print spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }

        // Print stars
        for (stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}

