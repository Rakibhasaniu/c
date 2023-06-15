#include<stdio.h>
int main () {
    int price;
    scanf("%d", &price);
    if(price >= 100000){
        printf("Gucci Bag\n");
        if(price > 20000){
            printf("Gucci Belt");
        }
    }
    else if(price >= 5000){
        printf("Levis Bag");
    }
    else{
        printf("Something");
    }

    return 0;
}