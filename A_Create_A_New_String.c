#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    scanf("%s",S);
    char T[1001];
    scanf("%s",T);

    int lgths=strlen(S);
    int lgtht=strlen(T);

    printf("%d %d\n",lgths, lgtht);
    printf("%s %s\n",S, T);
    return 0;
}