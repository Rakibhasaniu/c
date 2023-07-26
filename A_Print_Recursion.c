#include<stdio.h>
void recursion(int N)
{
    if(N==0) return;
    printf("I love Recursion\n");
    recursion(N-1);
}
int main()
{
    int N;
    scanf("%d",&N);
    recursion(N);
    return 0;
}