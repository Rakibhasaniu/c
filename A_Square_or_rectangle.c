#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++){
         int a,b;
    scanf("%d %d",&a,&b);
    if(a==b) {
        printf("Square\n");
    } else {
        printf("Rectangle\n");
    }
    }
   
    return 0;
}