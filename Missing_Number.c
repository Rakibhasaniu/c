#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++) {
        long long int total,value1,value2,value3;
        scanf("%lld %lld %lld %lld",&total,&value1,&value2,&value3);
        long long int sum = value1 + value2 + value3;
        long long int result = total - sum;
        printf("%lld\n",result);
    }

    return 0;
}