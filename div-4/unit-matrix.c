#include<stdio.h>
int main()
{
    int row,col,flag;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    flag=1;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i=j)
            {
                if(a[i][j] != 1)
                {
                    flag=0;
                }
                
            }
            else if(a[i][j] != 0){
                flag=0;
            }
        }
    }
    if(flag == 1){
        printf("Unit-Matrix");
    } else {
        printf("Not Unit-Matrix");
    }

    return 0;
}