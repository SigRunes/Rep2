#include <stdio.h>
int main(void){

    int a[20];
    int n;
    printf("N: ");
    scanf("%i", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    int i2;
    for (i = n - 1; i >= 0; --i) {
        if (a[i] < 0) {
            ++n;
            for (i2 = n; i2 > i; --i2) a[i2] = a[i2 - 1];
            a[i + 1] = 0;
        }
    }

    for (i = 0; i < n; ++i) printf("  %i: %i\n", i + 1, a[i]);

    return 0;
}