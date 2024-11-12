#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col, nums;
    scanf("%d%d%d", &row, &col, &nums);
    int arr[row][col];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            arr[i][j] = 0;
        }
    }
    for(int i = 0; i < nums; i++) {
        int temp_row, temp_col, temp_value;
        scanf("%d%d%d", &temp_row, &temp_col, &temp_value);
        arr[temp_row][temp_col] = temp_value;
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}