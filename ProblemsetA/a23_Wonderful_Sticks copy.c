#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if(s[i] == '>') count++;
        }

        int first_digit = n - count;
        printf("%d ",first_digit);
        int k = 1, l = 1;
        for (int i = 0; i < n - 1; i++) {
            if(s[i] == '<'){
                printf("%d ", first_digit - k);
                k++;
            } else{
                printf("%d ", first_digit + l);
                l++;
            }
        }
        printf("\n");
    }
    return 0;
}