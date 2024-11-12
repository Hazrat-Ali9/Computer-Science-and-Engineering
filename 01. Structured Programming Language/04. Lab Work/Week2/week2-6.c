#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2 == 1) {
        printf("%d", num - 1);
    }
    else {
        printf("%d", num);
    }
    return 0;
}

