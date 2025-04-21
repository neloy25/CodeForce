#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int min= 100000;
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < min) min = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if(arr[i] == min) count++;
    }
    if(count % 2 == 1) printf("Lucky");
    else printf("Unlucky");
    return 0;
}