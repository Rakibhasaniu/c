
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int sum_primary_diagonal = 0;
  int sum_secondary_diagonal = 0;
  for (int i = 0; i < n; i++) {
    sum_primary_diagonal += arr[i][i];
    sum_secondary_diagonal += arr[i][n - i - 1];
  }

  int absolute_difference = abs(sum_primary_diagonal - sum_secondary_diagonal);
  printf("%d\n", absolute_difference);

  return 0;
}
