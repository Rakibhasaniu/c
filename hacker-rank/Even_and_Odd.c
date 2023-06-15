#include<stdio.h>
int main()
{
    int N;
    int num;
    scanf("%d %d",&N, &num);
    int evenSum=0;
    int oddSum=0;
    if(num%2 == 0){
        evenSum=evenSum+num;
        printf("%d\n",evenSum);
    } else{
        oddSum=oddSum+num;
        printf("%d\n",oddSum);
    }

    
    return 0;
}