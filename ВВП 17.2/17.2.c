#include<stdio.h>

int main() {
	int a[10];
	int N, i, Dif;

	printf("Input N: ");
	scanf("%d", &N);

	for (i = 1; i < N; i++) {
		printf("%d: ",i);
		scanf("%d", &a[i]);
	}
	Dif = a[2] - a[1];
	for (i = 2; i < N; i++)
		if (Dif !=a[i] - a[i - 1])
			Dif = 0;
	printf("%d", Dif);
	return 0;
}