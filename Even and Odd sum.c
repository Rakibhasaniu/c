#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[n]);
    int even=0,odd=1;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            even+=arr[i];
        } else{
            odd +=arr[i];
        }
    }
        printf("%d %d\n", even, odd);

    
    return 0;
}