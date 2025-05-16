#include<stdio.h>

int max_num(int arr[],int n,int i,int max){
    if(i == n) return max;
    if(arr[i] > max) {
        max = arr[i];
    }
    max_num(arr,n,i+1,max);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = max_num(arr,n,1,arr[0]);
    printf("%d", max);
    return 0;
}