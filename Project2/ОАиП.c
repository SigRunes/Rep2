#include<stdio.h>

int main() {
    int i = 1, j = 2, buf, N = 7;
    int arr[] = { 6, 3, 1, 5, 9, -7, 2 };
    while (i < N) {
        if (arr[i - 1] > arr[i]) {
            buf = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = buf;
            i--;
            if (i > 0) continue;
        }
        i = j++;
    }
    for (i = 0; i < N; i++)
        printf("%d\n", arr[i]);
    return 0;
}
