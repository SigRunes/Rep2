#include <stdio.h>

int main(void)
{
    int A, B;
    printf("A:");
    scanf("%i", &A);

    printf("B:");
    scanf("%i", &B);

    printf("%i\n", A % B);

    return 0;
}