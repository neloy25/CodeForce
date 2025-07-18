#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[11];
        scanf("%s", s);

        int freq[10] = {0};
        for (int i = 0; i < 10; i++) {
            freq[s[i] - '0']++;
        }

        char result[11];
        for (int i = 0; i < 10; i++) {
            for (int d = 0; d <= 9; d++) {
                if (freq[d] > 0 && d >= 9 - i) {
                    result[i] = d + '0';
                    freq[d]--;
                    break;
                }
            }
        }
        result[10] = '\0';
        printf("%s\n", result);
    }
    return 0;
}
