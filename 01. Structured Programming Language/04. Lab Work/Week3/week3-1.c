#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2) {
        printf("odd\n");
    }
    else {
        printf("even\n");
    }
    return 0;
}
