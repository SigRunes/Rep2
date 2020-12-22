#include<stdio.h>
#include<math.h>

int main() {
    int i = 1, j = 2, buf, N = 6;
    int a[6] = { 13,-2,0,4,8,99 };
    for (i = 0; i <= N; i++) {
        for (i = 1, j = 2; i < N; i = j++) {

            if (a[i - 1] > a[i]) {
                buf = a[i];
                a[i] = a[i - 1];
                a[i - 1] = buf;
                i--;
            }
        }
    }

    for (i = 0; i < N; i++)
        printf("%d\n", a[i]);
    return 0;
}
