#include<stdio.h>

int main(){
    int n,a,b;
    int sum = 0;
    scanf("%d%d%d",&n,&a,&b);
    for(int i =1; i <=n; i++){
        int digitSum = 0;
        int copy = i;
        while(copy > 0){
            int rem = copy % 10;
            copy = copy / 10;
            digitSum += rem;
        }
        if(digitSum>=a && digitSum<= b){
            sum += i;
        }
    }
    printf("%d",sum);
    return 0;
}