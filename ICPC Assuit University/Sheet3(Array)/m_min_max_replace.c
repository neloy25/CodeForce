#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int min = 100000;
    int max = -100000;
    int min_index = 0;
    int max_index = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }

    arr[min_index] = max;
    arr[max_index] = min;

    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
    
    return 0;
}