#include<stdio.h>
#include<math.h>

double original_price(int x,int p) {
    double original_price=p/(1-(x/100.0));
    return round(original_price*100)/100.0;
}
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);
    double result= original_price (x,p);
    printf("%.2f\n",result);
    return 0;
}