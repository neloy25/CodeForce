// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/s

#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i <t; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        int sum = 0;
        
        if(a > b){
            int temp = b;
            b = a;
            a = temp;
        }
        for(int j = a + 1; j < b;j++){
            if(j %2 == 1){
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
}