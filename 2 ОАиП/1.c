#include <stdio.h>
#include <math.h>

void qsort(int* arr, int b, int e) {
	int piv = arr[(b + e) / 2];
	int l = b;
	int r = e;
	for (; l <= r;)
	{
		for (; arr[l] < piv;) l++;
		for (; arr[r] > piv;) r--;
		if (l <= r)
		{
			int t = arr[l];
			arr[l] = arr[r];
			arr[r] = t;
			l++;
			r--;
		}
		if (b < r) {
			qsort(arr, b, r);
		}
		if (l < e)
		{
			qsort(arr, l, e);
		}
	}
}
int main()
{
	int b, e, l, r, t;
	int arr[] = { 5,3,1,-6,-8,0 };
	int N = sizeof(arr) / sizeof(int);
	qsort(arr, 0, N - 1);
	for (int i = 0; i < N; i++)
		printf(" %d\n", arr[i]);
	return 0;
}