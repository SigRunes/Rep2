#include <stdio.h>

int main(void)
{
    int n;
    printf("N:");
    scanf("%i", &n);

    int rez = 0;
    int i;
    for (i = 1; i <= (2 * n - 1); i += 2) {
        rez += i;
        printf("%i \n ", rez);
    }
    return 0;
}