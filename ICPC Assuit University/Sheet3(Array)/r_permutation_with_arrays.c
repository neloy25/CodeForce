#include<stdio.h>

void sort(int n, int arr[n]){
    for (int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
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

    sort(n,arr1);
    sort(n,arr2);

    int found = 1;

    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            found = 0;
            break;
        }
    }

    if(found) printf("yes");
    else printf("no");
    return 0;
}