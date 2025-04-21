#include<stdio.h>
#include<string.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    char ch[a + b + 1];
    getchar();
    for(int i = 0; i < a + b + 1; i++){
        scanf("%c", &ch[i]);
        if(i == a) continue;
        if(!(ch[i] >= '0' && ch[i] <= '9')){
            printf("No");
            return 0;
        }
    }
    if(ch[a] == '-') printf("Yes");
    else printf("No");
    return 0;
}