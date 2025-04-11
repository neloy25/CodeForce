#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int st = 0;
    int end = 1;
    int sum = st + end;

    while(sum < n){
        st = end;
        end = sum;
        sum = st + end;
    }
    if(sum == n) print("%d",n);
    else print("none");
}