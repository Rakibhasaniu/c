#include <stdio.h>

int main() {
  int t, n, m, ai, bi, di, i;
  scanf("%d", &t);
  for (i = 0; i < t; i++) {
    scanf("%d%d", &n, &m);
    int camp[n + 1];
    for (i = 0; i <= n; i++) {
      camp[i] = 0;
    }
    for (i = 0; i < m; i++) {
      scanf("%d%d%d", &ai, &bi, &di);
      if (di > 0) {
        camp[ai] = camp[bi] + di;
      } else {
        camp[ai] = camp[bi] - di;
      }
    }
    int flag = 1;
    for (i = 0; i < m; i++) {
      if (camp[ai] != camp[bi] + di) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
