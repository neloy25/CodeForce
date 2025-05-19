#include<stdio.h>

int palindrome_arr(int arr[],int n,int left,int right){
    if(left < right){
        if(arr[left] == arr[right]) palindrome_arr(arr,n,left+1,right-1);
        else return 0;
    } else{
        return 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int check = palindrome_arr(arr,n,0,n - 1);
    if(check == 0) printf("NO");
    else printf("YES");
    return 0;
}