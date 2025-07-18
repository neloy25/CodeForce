#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);    
    while (t--) {
        int x,y,z;
        scanf("%d %d %d", &x,&y,&z);
        if((x + y + z) % 3 != 0){
            printf("NO\n");
        } else{
            int avg = (x + y + z) / 3;
            if(y <= avg && z > avg){
                printf("YES\n");
            } else{
                printf("NO\n");
            }
        }
    }
    return 0;
}