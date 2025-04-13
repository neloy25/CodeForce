#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
     if(ch >= 'A' && ch <= 'z'){
        printf("ALPHA\n");
        if(ch >= 'a' && ch <= 'z') printf("IS SMALL");
        else printf("IS CAPITAL");
    } else{
        printf("IS DIGIT");
    }
    return 0;
}