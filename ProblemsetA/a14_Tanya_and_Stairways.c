#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int ways[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int way = 1;
    int count = 1;
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if(arr[i + 1] != arr[i] + 1){
            way++;
            ways[j++] = count;
            count = 0;
        }
        count++;
    }

    ways[j++] = count;

    printf("%d\n", way);
    for (int i = 0; i < j; i++) {
      printf("%d ", ways[i]);
    }
    return 0;
}