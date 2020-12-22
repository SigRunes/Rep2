#include<stdio.h>

int main() {
	int a[10];
	int N, i, r;

	printf("Input N: ");
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		printf("%d: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 1; i < N - 1; i++)
		for (r = i + 1; r <= N; i++)
			if (a[i] = a[r])
				printf("%d %d", i, r);
	return 0;
}