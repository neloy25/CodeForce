#include<stdio.h>
#include<math.h>

int main() {
    int a,b;
    scanf("%d%d", &a,&b);
    float div = (float) a / b;
    int flor = floor(div);
    printf("floor %d / %d = %d\n", a,b,flor);
    int cl = ceil(div);
    printf("ceil %d / %d = %d\n", a,b,cl);
    int rod = round(div);
    printf("round %d / %d = %d", a,b,rod);
    return 0;
}