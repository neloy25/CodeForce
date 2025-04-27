#include<stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		int feq[200001] = {0};
		int flag = 1;
		feq[arr[0]] = 1;
		for (int i = 1; i < n - 1; i++) {
			if(feq[arr[i] + 1] == 1 || feq[arr[i] - 1] == 1){
				feq[arr[i]] = 1;
			} else{
				flag = 0;
				printf("NO\n");
				break;
			}
		}
		if(flag) printf("YES\n");
	}
	return 0;
}