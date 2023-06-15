#include<stdio.h>
int main() {
    int num1,num2;
    int sum,sub,mul,mod;
    float div;
    scanf("%d %d", &num1, &num2);

    // perform arithmetic operation//
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    mod = num1 % num2;
    div = (float)num1 / num2;


    printf("The sum of the given numbers : %d\n", sum);  
    printf("The difference of the given numbers : %d\n", sub);  
    printf("The product of the given numbers : %d\n", mul);  
    printf("The quotient of the given numbers : %f\n", div);  
    printf("MODULUS = %d\n", mod);

    return 0;
}