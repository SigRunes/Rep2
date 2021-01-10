#include <stdio.h>
int main(void){
    int arr[] = { 1, 2, 3, 4, 1 };
    int tmp = 0;
    for (int i = 0; i < 5; i++){
        if (arr[i] % 2 != 0)
        {
            tmp = arr[i];
        }
    }
    for (int i = 0; i < 5; i++){
        if (arr[i] % 2 != 0)
        {
            arr[i] = arr[i] + tmp;
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    getchar();
    return 0;
}