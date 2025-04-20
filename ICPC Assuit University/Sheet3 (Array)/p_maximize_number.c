#include<stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 1){
            printf("0");
            return 0;
        } 
    }

    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int count = 0;
        while (arr[i] % 2 == 0) {
            arr[i] /= 2;
            count++;
        }
        if(count < min) min = count; 
    }
    printf("%d", min);
    return 0;
}