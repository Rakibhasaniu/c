#include<stdio.h>
void fun(int N)
{
    if(N==0) {
        return;
    } else {
        printf("%d",N);
        if(N != 1) {
            printf(" ");
        }
        fun(N-1);
    }
    
    
}
int main()
{
    int N;
    scanf("%d",&N);
    fun(N);
    
    return 0;
}
