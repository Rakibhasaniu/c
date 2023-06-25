#include<stdio.h>
#include<string.h>
int main()
{
    char n[101];
    int length,count;
    scanf("%d",&count);
    for(int i=0;i<count;i++)
    {
        scanf("%s",n);
        length=strlen(n);
        if(length <=10){
            printf("%s\n",n);
        } else {
            printf("%c%d%c\n",n[0], length-2, n[length-1]);
        }
    }
    return 0;
}