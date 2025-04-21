#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = n -1;
    while(left <= right && arr[left] == arr[right]){
        left++;
        right--;
    }
    if(left > right) printf("YES");
    else printf("NO");
    return 0;
}