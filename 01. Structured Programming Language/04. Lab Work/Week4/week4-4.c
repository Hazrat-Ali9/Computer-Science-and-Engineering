#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        for(int j = num - 1 - i; j > 0; j--) {
            printf(" ");
        }
        for(int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("*\n");
    }
    return 0;
}
