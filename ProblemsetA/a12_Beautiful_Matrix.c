#include<stdio.h>

int absolute(int x){
    if(x < 0) return x * (-1);
    return x;
}

int main() {
    int row,col;
    int arr[5][5];
    int found = 0;
    for (int i = 0; i < 5 && !found; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] != 0){
                row = i;
                col = j;
                found = 1;
                break;
            }
        }
        if(found == 1) break;
    }
    int res = absolute(2 - row) + absolute(2 - col);
    printf("%d", res); 
    return 0;
}