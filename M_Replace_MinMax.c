#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    int minimum_index=0;
    int max_index=0;
    for(int i=1;i<N;i++)
    {
        if(A[i]<A[minimum_index]){
            minimum_index=i;
        }
        if(A[i]>A[max_index]){
            max_index=i;
        }
    }
    int temp_value=A[minimum_index];
    A[minimum_index]=A[max_index];
    A[max_index]=temp_value;
    for(int i=0;i<N;i++){
        printf("%d ",A[i]);
    }

    return 0;
}