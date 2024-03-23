#include<stdio.h>


void printMinAndMax(int arr[], int n) {
    int min=arr[0];  // Assume the first element
    int max=arr[0];  // is the maximum
    for(int i=1;i<n;i++){
        if(arr[i] < min){
            min=arr[i];
        } 
        if(arr[i] > max){
            max=arr[i];
        }
    }
        printf("%d %d\n", min, max);

}
int main(){
    int N;
    scanf("%d", &N); 
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printMinAndMax(arr, N);

    return 0;
}