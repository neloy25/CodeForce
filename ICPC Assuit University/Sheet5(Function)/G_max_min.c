#include<stdio.h>
#include<limits.h>

void max_c (int n, int arr[]){
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for (int i= 0; i<n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    printf("%d %d", minimum, maximum);
}


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max_c(n, arr);
    return 0;
}