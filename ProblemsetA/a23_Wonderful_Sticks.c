#include<stdio.h>
#include<math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        int check[n - 1];
        int first_digit = 1;
        for (int i = 0; i < n -1; i++) {
            if(s[i] == '<') {
                check[i] = - 1;
                first_digit++;
            }
            else {
                check[i] = 1;
            }
        }
        int nums[n + 1];
        for (int i = 1; i <= n; i++) {
            nums[i] = i;
        }
        

        printf("%d ",nums[first_digit]);
        int k = 1;
        int l = 1;
        for (int i = 0; i < n -1; i++) {
            if(check[i] == 1){
                printf("%d ", nums[first_digit+k]);
                k++;
            } else{
                printf("%d ", nums[first_digit - l]);
                l++;
            }
        }
        printf("\n");
    }
    return 0;
}