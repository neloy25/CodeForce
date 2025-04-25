#include<stdio.h>

int main() {
    int n,m;
    scanf("%d%d", &n,&m);
    char s[n][m];
    for (int i = 0; i < n; i++) {
        getchar();
        for (int j = 0; j < m; j++) {
            scanf("%c",&s[i][j]);
        }
    }
    int x, y;
    scanf("%d%d", &x,&y);
    // int i = x - 2;
    // int j = y - 2;
    // if(x == 1) i = 0;
    // if(y == 1) j = 0;
    int i = 0;
    while(i <= x && i < n){
        int j = 0;
        while(j <= y && j < m){
            printf("%d %d\n",i,j);
            j++;
        }
        i++;
    }
    printf("yes");
    return 0;
}