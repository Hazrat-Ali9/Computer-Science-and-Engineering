#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    for(int n = 0; ; n++) {
        scanf("%d", &num);
        if(num == 0) {
            break;
        }
        if(num == 1) {
            printf("not a prime\n");
            continue;
        }
        if(num == 2) {
            printf("prime\n");
            continue;
        }
        int flag = 1;
        for(int i = 2; i < num; i++) {
            if(num % i == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            printf("prime\n");
        }
        else {
            printf("not a prime\n");
        }
    }
    return 0;
}
