#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maximum, minimum, arr[100000], num, index = 0;
    while (scanf("%d", &num) != EOF) {
        arr[index++] = num;
    }
    maximum = arr[0], minimum = arr[0];
    for (int i = 0; i < index; i++) {
        if (maximum < arr[i]) {
            maximum = arr[i];
        }
        if (minimum > arr[i]) {
            minimum = arr[i];
        }
    }
    printf("%d %d\n", maximum, minimum);
    return 0;
}
