#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int digit=N/1000;
    if(digit%2==0){
        printf("EVEN");
    } else{
        printf("ODD");
    }
    return 0;
}