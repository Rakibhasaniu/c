#include<stdio.h>
void ascending_order(int A,int B,int C) {
    if(A>B){
        int temp=A;
        A=B;
        B=temp;
    }
    if(A>C){
        int temp=A;
        A=C;
        C=temp;
    }
    if(B>C){
        int temp=B;
        B=C;
        C=temp;
    }
    printf("%d\n%d\n%d\n",A,B,C);
}
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    ascending_order(A,B,C);
    printf("\n");
    printf("%d\n%d\n%d\n",A,B,C);
    return 0;
}