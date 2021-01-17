#include<stdio.h>
int main(void)
{
    int n;
    printf("N:");
    scanf("%i", &n);
    int f1 = 1, f2 = 1, f = 0, k = 2;

    while (f < n) {
        ++k;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    printf("K:%i\n", k);
    return 0;
}