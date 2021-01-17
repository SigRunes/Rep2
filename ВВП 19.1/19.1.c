#include<stdio.h> 

int main(){
    int a[10];
    int n;
    printf("N: ");
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf("%i", &a[i]);
    }
    int k = 0;
    for (i = 1; i < n; ++i) {
        if (a[k] != a[i]) {
            ++k;
            a[k] = a[i];
        }
    }
    ++k;
    printf("A - %i\n", k);
    for (i = 0; i < k; ++i) printf("  %i: %i\n", i + 1, a[i]);
    return 0;
}