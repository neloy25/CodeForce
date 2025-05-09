#include<stdio.h>
#include<string.h>

int main() {
    char s1[100001],s2[100001],f1[100001],f2[100001];
    scanf("%s%s", f1,s1);
    scanf("%s%s", f2,s2);
    int check = strcmp(s1,s2);
    if(!check) printf("ARE Brothers");
    else printf("NOT");
    return 0;
}