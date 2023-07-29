#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int min_value=a[0];
    for(int i=1;i<n;i++){
        if(a[i] < min_value){
            min_value=a[i];
        }
    }
    int frequency=0;
    for(int i=0;i<n;i++){
        if(a[i] == min_value){
            frequency++;
        }
    }
    if(frequency%2==1){
        printf("Lucky\n");
    } else {
        printf("Unlucky");
    }
    return 0;
}