#include<stdio.h>

void printf_even_indices(int arr[],int n,int i){
    if(i >= n) return; 
    printf_even_indices(arr,n,i + 2);
    printf("%d ",arr[i]);   
}


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf_even_indices(arr,n,0);
    return 0;
}