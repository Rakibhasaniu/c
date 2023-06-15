
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int evenExists = 0; 

    for (int i = 2; i <= N; i=i+2) {
        printf("%d\n", i);
        evenExists = 1; 
    } 
    if (!evenExists) {
        printf("-1\n"); 
    }
    
    return 0;
}
