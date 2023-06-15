#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int lowesNumber=ar[0];
    int lowestPosition=1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<lowesNumber){
            lowesNumber=ar[i];
            lowestPosition=i+1;        }
    }
    printf("%d %d",lowesNumber ,lowestPosition);
    return 0;
}


