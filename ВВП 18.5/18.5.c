#include<stdio.h>

int main(){
    int arr[] = { 9, 0, 2, 4, 5, 6, 9, 12, 14 };
    int n = sizeof(arr) / sizeof(int);
    int i,temp;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        else
            break;
    }

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}