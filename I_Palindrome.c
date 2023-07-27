// #include <stdio.h>
// #include <string.h>

// int isPalindrome(const char *str) {
//     int len = strlen(str);
//     int start = 0;
//     int end = len - 1;

//     while (start < end) {
//         if (str[start] != str[end]) {
//             return 0;
//         }

//         start++;
//         end--;
//     }

//     return 1;
// }

// int main() {
//     char str[1001];

    
//     scanf("%s", str);

//     if (isPalindrome(str)) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s",&a);
    strcpy(b,a);
    // printf("%s",b);
    int i=0;int j=strlen(b)-1;
    while(i<j)
    {
        char tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
        i++;
        j--;
    }
    if(strcmp(a,b)==0)
    {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}