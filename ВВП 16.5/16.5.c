#include<stdio.h>

int main() {
	int arr[20];
	int N, i;
	printf("Input N: ");
	scanf("%d", &N);
	for (i = 1; i < N; i++)
		scanf("%d", &arr[i]);
	i = 1;
	while (i <= N) {
		printf("%d\n", arr[i]);
		i = i + 2;
	}
	N = N % 2;
	for (i = 0; i < N; i++)
		printf("%d\n", arr[i * 2]);
	return 0;
}