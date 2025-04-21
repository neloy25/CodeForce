#include<stdio.h>
#include<string.h>

int main() {
    char s[1001];
    scanf("%s", &s);

    int left = 0;
    int right = strlen(s) - 1;
    while(left <= right && s[left] == s[right]){
        left++;
        right--;
    }
    if(left > right) printf("YES");
    else printf("NO");
    return 0;
}