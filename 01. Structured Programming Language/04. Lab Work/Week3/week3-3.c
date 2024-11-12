#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    if(a < b) {
        return a;
    }
    return b;
}

int max(int a, int b)
{
    if(a > b) {
        return a;
    }
    return b;
}

int main()
{
    int p1_x1, p1_x2, p2_x1, p2_x2;
    scanf("%d%d%d%d", &p1_x1, &p1_x2, &p2_x1, &p2_x2);
    int minimum, maximum;
    minimum = min(min(min(p1_x1, p1_x2), p2_x1), p2_x2);
    maximum = max(max(max(p1_x1, p1_x2), p2_x1), p2_x2);
    int n = maximum - minimum + 1;
    int counter[n];
    for(int i = 0; i < n; i++) {
        counter[i] = 0;
    }
    for(int i = min(p1_x1, p1_x2); i <= max(p1_x1, p1_x2); i++) {
        counter[i - minimum]++;
    }
    for(int i = min(p2_x1, p2_x2); i <= max(p2_x1, p2_x2); i++) {
        counter[i - minimum]++;
    }
    int target = 0;
    for(int i = 0; i < n; i++) {
        if(counter[i] == 2) {
            target++;
        }
    }
    if(target > 1) {
        printf("overlay\n");
    }
    else {
        printf("no overlay\n");
    }
    return 0;
}
