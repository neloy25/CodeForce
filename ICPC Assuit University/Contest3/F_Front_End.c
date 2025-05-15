#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;
    while(left < right) {
        printf("%d %d ", arr[left],arr[right]);
        left++;
        right--;
    }

    if(left == right) printf("%d", arr[left]);
    return 0;
}