#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int arr[5];
        for (int i = 0; i < 5; i++) {
            if(i == 2) continue;
            scanf("%d", &arr[i]);
        }

        arr[2] = arr[3] - arr[1];

        int res = 0;
        for (int i = 0; i < 3; i++) {
            if(arr[i + 2] == arr[i + 1] + arr[i]) res++;
        }

        printf("%d\n", res);
    }
    return 0;
}