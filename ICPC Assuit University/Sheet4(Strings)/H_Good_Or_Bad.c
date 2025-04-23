#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100001];
        scanf("%s", &s);
        int len = strlen(s);
        char test = s[0];
        int count = 0;
        for (int i = 0; i < len; i++) {
            if(s[i] == test){
                count++;
                if(count == 3){
                    printf("Good\n");
                    break;
                }
            } else{
                count = 1;
            }
            if(s[i] == '0') test = '1';
            else test = '0';
        }
        if(count < 3) printf("Bad\n");
    }
    
    return 0;
}