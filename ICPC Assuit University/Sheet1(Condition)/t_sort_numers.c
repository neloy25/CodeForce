#include<stdio.h>
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void ascend(int arr[]){
     for (int i = 0; i < 2; i++) {
         for (int j = i + 1; j < 3; j++) {
             if(arr[i] > arr[j]) swap(&arr[i],&arr[j]);
         }
     }
}

int main() {
    int arr[3];
    int arr1[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        arr1[i] = arr[i];
    }

    ascend(arr);

    for (int i = 0; i < 3; i++) {
      printf("%d\n", arr[i]);
    }

    printf("\n");
    
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr1[i]);
    }
    return 0;
}