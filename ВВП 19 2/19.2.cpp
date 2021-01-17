#include <stdio.h>
int main(void)
{
    int a[10];
    int n;
    printf("N: ");
    scanf("%i", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }

    int ai, i2, k, num;
    for (i = 0; i < n; i++) {
        num = 0;
        for (i2 = 0; i2 < n; ++i2) if (a[i] == a[i2]) ++num;

        if (num == 2) {
            k = i - 1;
            ai = a[i];
            for (i2 = i; i2 < n; ++i2)
                if (a[i2] != ai) {
                    ++k;
                    a[k] = a[i2];
                }
            n = k + 1;
            --i;
        }
    }

    printf("A - %i\n", n);
    for (i = 0; i < n; ++i) printf("  %i: %i\n", i + 1, a[i]);

    return 0;
}