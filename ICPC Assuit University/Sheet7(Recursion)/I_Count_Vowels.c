#include<stdio.h>
#include<string.h>

int count = 0;
int count_vowels(char s[],int i){
    int len = strlen(s);
    if(s[i] == '\0') return count;
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
    || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') count++;
    count_vowels(s,i+1);
}

int main() {
    char s[201];
    fgets(s,201,stdin);
    int res = count_vowels(s,0);
    printf("%d", res);
    return 0;
}