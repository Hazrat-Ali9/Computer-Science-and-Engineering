#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++) {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
