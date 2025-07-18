#include<stdio.h>
#include<math.h>


void sort(){

}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            arr[i] = abs(arr[i]);
        }

        int count = 0;

        for (int i = 1; i < n; i++) {
        if(arr[i] >= arr[0]) count++;
        }

        if(count >= (n - 1)/ 2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}