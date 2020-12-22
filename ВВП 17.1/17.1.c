#include<stdio.h>
#include <stdio.h> 

int main(){
    int a[10];
    int n, k, l;

    printf("N: ");
    scanf("%d", &n);

    printf("K: ");
    scanf("%d", &k);

    printf("L: ");
    scanf("%d", &l);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%d] : ", i + 1);
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (i = k - 1; i <= l - 1; ++i) sum += a[i];

    printf("%f\n: ", (float)sum / (float)(l - k + 1));
    return 0;
}