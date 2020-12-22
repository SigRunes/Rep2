#include<stdio.h>

int main() {
	int a[10];
	int N, i;
	printf("Input N: ");
	scanf("%d", &N);

	printf("Input array: ");
	for (i = 1; i <= N; i++)
		scanf("%d", &a[i]);

	for (i = N - 1; i > 2; i--)
		if (a[i] > a[i - 1] && (a[i] > a[i + 1])) {
			printf("%d ", i);
			break;
		}
		else 
			printf("0");
	
	return 0;
}