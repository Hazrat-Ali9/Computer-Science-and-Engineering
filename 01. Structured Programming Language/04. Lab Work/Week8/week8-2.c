#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size][size];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    arr[0][0] = 2;
    while(flag) {
        flag = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if(arr[i][j] == 1 || arr[i][j] == 2) {
                    continue;
                }
                if((j < size - 1 && arr[i][j + 1] == 2) || (j > 0 && arr[i][j - 1] == 2) || (i < size - 1 && arr[i + 1][j] == 2) || (i > 0 && arr[i - 1][j] == 2)) {
                    arr[i][j] = 2;
                    flag = 1;
                }
            }
        }
        if(flag == 0) {
            break;
        }
    }
    if(arr[size - 1][size - 1] == 2) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}