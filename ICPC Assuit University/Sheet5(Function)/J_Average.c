#include<stdio.h>
double average(int n,double arr[n]){
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    double average = sum / n;
    return average;
}
int main() {
    int n;
    scanf("%d", &n);
    double arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    
    printf("%.7lf", average(n,arr));
    return 0;
}