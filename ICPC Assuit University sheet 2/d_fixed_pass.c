#include<stdio.h>

int main(){
    while(1){
        int pass;
        scanf("%d",&pass);
        if(pass == 1999){
            printf("Correct\n");
            break;
        } else{
            printf("Wrong\n");
        }
    }
    return 0;
}