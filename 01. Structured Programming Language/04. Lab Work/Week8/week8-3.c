#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int counter = 0, up = 0, down = row - 1, left = 0, right = col - 1;
    while(counter < row * col) {
        for(int i = left; i <= right; i++) {
            printf("%d ", arr[up][i]);
            counter++;
        }
        up++;
        for(int i = up; i <= down; i++) {
            printf("%d ", arr[i][right]);
            counter++;
        }
        right--;
        for(int i = right; i >= left; i--) {
            printf("%d ", arr[down][i]);
            counter++;
        }
        down--;
        for(int i = down; i >= up; i--) {
            printf("%d ", arr[i][left]);
            counter++;
        }
        left++;
    }
    return 0;
}