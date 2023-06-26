#include<stdio.h>
#include<string.h>
int main()
{
    char A[11],B[11];
    scanf("%s",A);
    int lengthOfA = strlen(A);
    scanf("%s",B);
    int lengthOfB = strlen(B);

    printf("%d %d\n",lengthOfA, lengthOfB);

    printf("%s%s\n",A,B);

    char temporaryValue=A[0];
    A[0]=B[0];
    B[0]=temporaryValue;
    printf("%s %s",A,B);
    return 0;
}