#include<stdio.h>
#include<limits.h>

void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp; 
}

void sort(int n,int arr[]){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) swap(&arr[i],&arr[j]);
        }
    }
}

int main() {
    int n,k;
    scanf("%d%d", &n,&k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(n,arr);
    long long int res = 0;
    for (int i = 0; i < k; i++) {
      res+=arr[i];
    }
    printf("%lld", res);
    return 0;
}