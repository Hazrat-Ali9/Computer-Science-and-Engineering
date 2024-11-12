#include <stdio.h>
#include <stdlib.h>

int main()
{
    float wall, up, down, day;
    int day2;
    scanf("%f%f%f",&wall,&up,&down);
    day = ((wall - up)/(up - down));
    day2 = day;
    if(day > day2) {
        day2 = day2 + 1;
    }

    if (wall <= up) {
        printf("1");
    }
    else if(up <= down) {
        printf("-1");
    }
    else {
        printf("%d",day2+1);
    }
    return 0;
}
