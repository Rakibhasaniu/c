#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

int main() {
    char str[1001];

    
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
