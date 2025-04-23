#include<stdio.h>
#include<string.h>

int main() {
    char s1[21],s2[21];
    scanf("%s", &s1);
    scanf("%s", &s2);

    int val = strcmp(s1,s2);

    if(val < 0) printf("%s", s1);
    else printf("%s", s2);
    return 0;
}