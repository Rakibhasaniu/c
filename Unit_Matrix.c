

// #include <stdio.h>

// int main() {
//   int n, i, j;
//   scanf("%d", &n);
//   int matrix[n][n];
//   for (i = 0; i < n; i++) {
//     for (j = 0; j < n; j++) {
//       scanf("%d", &matrix[i][j]);
//     }
//   }

//   int flag = 1;
//   for (i = 0; i < n; i++) {
//     for (j = 0; j < n; j++) {
//       if (i == j && matrix[i][j] != 1) {
//         flag = 0;
//         break;
//       } else if (i != j && matrix[i][j] != 0) {
//         flag = 0;
//         break;
//       }
//     }
//   }

//   if (flag) {
//     printf("YES");
//   } else {
//     printf("NO");
//   }

//   return 0;
// }
