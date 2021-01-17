#include <stdio.h>

int main() {
	int a[] = {7,3,4,3,44,44,12,12,11};
	int i, min, max, i1=0, i2=0, n=sizeof(a)/sizeof(int);
	
	min = a[1];
	max = a[1];
	for (i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			i1 = i;
		}
	}
	for (i = n+1; i > n; i--)
		a[i] = a[i - 1];
	a[i1] = 0;

	for (i = 0; i < n; i++) {
		if (a[i] > max){
			max = a[i];
			i2 = i;
		}
	}
	for (i = n+1; i > i2 + 2; i--)
		a[i] = a[i - 1];
	a[i2 + 1] = 0;

	for (i = 1; i < n; i++)
		printf("%d\n", a[i]);
	return 0;
}