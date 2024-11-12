#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    int arr[num + 1];
    for(int i = 0; i <= num; i++) {
        arr[i] = 0;
    }
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            arr[i] = 1;
        }
    }
    for(int i = 1; i <= num; i++) {
        if(arr[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
