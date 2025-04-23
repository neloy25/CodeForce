#include<stdio.h>
#include<string.h>

int main() {
    char s1[11],s2[11];
    scanf("%s", &s1);
    scanf("%s", &s2);
    char s[22];

    strcpy(s,s1);
    strcat(s,s2);

    printf("%d %d\n", strlen(s1),strlen(s2));
    printf("%s\n",s);

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    printf("%s %s",s1,s2);
    return 0;
}