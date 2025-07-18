#include<stdio.h>
#include<math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[5];
        scanf("%s", s);
        int sum = s[0] - '1';
        if(s[0] == '0') sum = 9;
        for (int i = 0; i < 3; i++) {
            int a = s[i] - '0';
            int b = s[i + 1] - '0';
            if(a == 0) a = 10;
            if(b == 0) b = 10;
            sum += abs(a - b);
        }
        printf("%d\n", sum + 4);
    }
    return 0;
}