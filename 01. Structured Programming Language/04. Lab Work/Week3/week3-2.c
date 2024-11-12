#include <stdio.h>
#include <stdlib.h>

int main()
{
    int big, small;
    scanf("%d%d", &big, &small);
    if(big % small == 0) {
        printf("%d is a multiple of %d.\n", big, small);
    }
    else {
        printf("%d is not a multiple of %d.\n", big, small);
    }
    return 0;
}
