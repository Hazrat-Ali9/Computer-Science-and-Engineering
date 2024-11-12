#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
    if(num == 1) {
        return 0;
    }
    if(num == 2) {
        return 1;
    }
    for(int i = 2; i < num / 2 + 1; i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num, counter = 0;
    scanf("%d", &num);
    for(int i = 2; i <= num / 2; i++) {
        if(isPrime(i) == 1 && isPrime(num - i) == 1) {
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
