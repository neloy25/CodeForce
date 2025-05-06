#include<stdio.h>

void shiftRight(int n,int x,int arr[n]){
    x = x % n;
    int newArr[n];
    for (int i = 1; i <= x; i++) {
        newArr[x - i] = arr[n - i];
    }
    for (int i = x; i < n; i++) {
        newArr[i] = arr[i - x];
    }
    
    for (int i = 0; i < n; i++) {
      printf("%d ", newArr[i]);
    }
}

int main() {
    int n,x;
    scanf("%d%d", &n,&x);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    shiftRight(n,x,arr);
    return 0;
}