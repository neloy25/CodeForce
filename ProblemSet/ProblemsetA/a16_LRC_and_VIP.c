#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int max = arr[0];
        int max_digit = 0;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i]!= max){
                flag = 1;
            }
            if(arr[i] > max){
                max = arr[i];
                max_digit = i;
            }
        }

        if (flag == 0) {
            printf("No\n",max);
            continue;
        } else {
            printf("Yes\n",max);
        }


        for (int i = 0; i < n; i++) {
        if(arr[i] == max){
            printf("2 ");
            continue;
        }
        printf("1 ");
        }

        printf("\n");
    }

    return 0;
}