#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    int find;
    scanf("%d", &find);
    int i;
    for (i = 0; i < t; i++) {
        if(arr[i] == find){
            printf("%d", i);
            break;
        }
    }
    if(i == t) printf("-1");
    return 0;
}