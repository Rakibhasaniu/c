#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int position,value;
    scanf("%d %d",&position,&value);
    for(int i=n;i>=position+1;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[position]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}