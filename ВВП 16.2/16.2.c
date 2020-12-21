#include<stdio.h>

int main() {
	int i, j, a, d, N;
	int arr[100];
	printf("Input N>1 and A and D: ");
	scanf("%d%d%d", &N, &a, &d);
	i = 0;
	arr[i] = a;
	i = 1;
	arr[i] = a * d;
	j = d;
	for (i = 2; i < N; i++) {
		d *= j;
		arr[i] = a * d;
	}
	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return 0;
}