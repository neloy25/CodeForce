#include<stdio.h>

long long int sum = 0;
long long int summation(int arr[],int n, int i){
    if(i == n) return sum;
    sum += (long) arr[i];
    summation(arr,n,i+1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long int res = summation(arr,n,0);
    printf("%lld", res);
    return 0;
}