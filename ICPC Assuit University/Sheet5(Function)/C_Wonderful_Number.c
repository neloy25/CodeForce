#include<stdio.h>
#include<string.h>

int binary(int n, char s[]){
    int i = 0;
    while(n != 0){
        char rem = n % 2 + '0';
        s[i] = rem;
        n = n / 2;
        i++;
    }
    s[i] = '\0';
    char rev[33];
    strcpy(rev, s);
    strrev(rev);
    int val = strcmp(rev,s);
    if(val == 0) return 1;
    else return 0;
}

int odd(int n){
    return n % 2;
}



int main() {
    char s[33];
    int n;
    scanf("%d", &n);
    if(odd(n) && binary(n,s)) printf("YES");
    else printf("NO");
    return 0;
}