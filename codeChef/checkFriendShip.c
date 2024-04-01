#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input number of test cases

    while (T--) {
        int n;
        scanf("%d", &n); // Input number of friends

        int days[101] = {0}; // Array to store the count of friends wanting party on each day

        // Input the days each friend wants a party on
        for (int i = 0; i < n; i++) {
            int day;
            scanf("%d", &day);
            days[day]++;
        }

        int max_friends_saved = 0;

        // Loop through the days array to find the maximum number of friends Devu can save
        for (int i = 1; i <= 100; i++) {
            if (days[i] > max_friends_saved) {
                max_friends_saved = days[i];
            }
        }

        printf("%d\n", max_friends_saved);
    }

    return 0;
}
