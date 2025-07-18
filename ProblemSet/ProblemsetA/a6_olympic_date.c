#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int c[6] = {0};
        int find = 1;
        for (int i = 0; i < n; i++) {
            if(arr[i] <= 5) c[arr[i]]++;
            if(c[0] > 2 && c[1] > 0 && c[2] > 1 && c[3] > 0 && c[5] > 0){
                find = 0;
                printf("%d\n",i+1);
                break;
            }
        }
        if(find) printf("0\n");
    }
    return 0;
}