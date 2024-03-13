#include<stdio.h>
#include<string.h>
 
int main() {
    char x[100],y[100];
    scanf("%s %s", x,y);
    int value = strcmp(x,y);
    if(value<=0){
        printf("%s",x);
    }else {
        printf("%s\n", y);
    }
    return 0;
}