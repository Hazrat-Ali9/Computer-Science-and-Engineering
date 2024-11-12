#include <stdio.h>
#include <stdlib.h>

int main()
{
    char morse[10][5] = {
        {"-----"},
        {".----"},
        {"..---"},
        {"...--"},
        {"....-"},
        {"....."},
        {"-...."},
        {"--..."},
        {"---.."},
        {"----."}
    };
    char num[1000];
    scanf("%s", &num);
    for(int i = 0; i < strlen(num); i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", morse[num[i] - '0'][j]);
        }
        printf(" ");
    }
    return 0;
}
