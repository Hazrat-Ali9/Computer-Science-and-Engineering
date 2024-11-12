#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[1000];
    scanf("%s", &arr);
    int n = strlen(arr);
    char copy_arr[1000];
    for(int i = 0; i < n; i++) {
        copy_arr[i] = tolower(arr[i]);
    }
    int isPalin = 1;
    for(int i = 0; i < n / 2; i++) {
        if(copy_arr[i] != copy_arr[n - i - 1]) {
            isPalin = 0;
            break;
        }
    }
    if(isPalin == 1) {
        printf("%s is a palindrome.\n", arr);
    }
    else {
        printf("%s is not a palindrome.\n", arr);
    }
    return 0;
}
