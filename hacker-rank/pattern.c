#include<stdio.h>
int main()
{
    int n,s,l;
    scanf("%d",&n);
    s=n-1;
    l=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=l;j++)
        {
            printf("*");
        }
        s--;
        l=l+2;
        printf("\n");
    }   
    return 0;
}