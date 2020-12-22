#include<stdio.h>

int main()
{
    int a[10];
    int n;

    printf("N: ");
    scanf("%d", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%d] : ", i + 1);
        scanf("%d", &a[i]);
    }

    int min = a[1];

    for (i = 1; i < n; i += 2) {
        if (a[i] < min) min = a[i];
    }

    printf("%d\n", min);

    return 0;
}