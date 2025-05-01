// #include<stdio.h>
// long long int helper(int n, long long int x) {
//     long long int y = x * x;
//     long long int result = y;
//     int times = (n - 2) / 2;
//     for (int i = 0; i < times; i++) {
//         result *= (1 + y);
//     }
//     return result;
// }
// int main() {
//     int n;
//     long long int x;
//     scanf("%lld%d", &x,&n);
//     if (n < 2){
//         printf("0");
//     }else {        
//         printf("%lld", helper(n, x));
//     }
//     return 0;
// }