#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int x, y, z;
    while(scanf("%d%d%d", &x, &y, &z) != EOF) {
        printf("%d\n", GCD(GCD(x, y), z));
    }
    return 0;
}
