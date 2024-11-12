#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for(int i = 0; ; i++) {
        int temp;
        scanf("%d", &temp);
        if(temp == 0) {
            break;
        }
        sum += temp;
    }
    printf("%d\n", sum);

    return 0;
}
