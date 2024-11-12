#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    float arr[num];
    for (int i = 0; i < num; i++) {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    float sum = 0;
    for (int i = 3; i < num - 3; i++) {
        sum += arr[i];
    }
    printf("%.2f", sum / (num - 6));
    return 0;
}
