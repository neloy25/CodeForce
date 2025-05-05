#include<stdio.h>

int new_arr(int n,int arr1[],int arr2[]){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    for (int i = 0; i < n; i++) {
      printf("%d ", arr1[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    new_arr(n,arr1,arr2);
    return 0;
}