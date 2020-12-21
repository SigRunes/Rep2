#include<stdio.h>
#include<math.h>

int main() {
	float A, B;
	int i;
	for (i = 0; i < 5; i++) {
		printf("Input A: ");
		scanf("%d", &A);
		B = proc(A);
		printf("A^3= %.2f\n",B);
	}
	return 0;
}

int proc(float A) {
	float B = pow(A, 3);
	return B;
}