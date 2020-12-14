#include<stdio.h>

int main(void)
{
    float c;
    printf("Cost:");
    scanf("%f", &c);

    float m;
    for (m = 0.1; m < 1.1; m += 0.1)
        printf("%f kg = %f \n ", m, c * m);
    return 0;
}
