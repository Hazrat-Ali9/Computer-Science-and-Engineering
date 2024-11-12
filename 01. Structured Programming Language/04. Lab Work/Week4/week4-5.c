#include <stdio.h>
#include <stdlib.h>

int main()
{
    long num;
    while(scanf("%d", &num) != EOF) {
        if(num == 0) {
            break;
        }
        if(num == 1) {
            printf("1 = 1\n");
            continue;
        }
        printf("%d = ", num);
        for(int i = 2; i <= num; i++) {
            while(num % i == 0) {
                printf("%d", i);
                num /= i;
                if(num != 1) {
                    printf(" * ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
