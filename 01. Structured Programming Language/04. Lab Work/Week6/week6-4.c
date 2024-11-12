#include <stdio.h>
#include <stdlib.h>

int main()
{
    int candi, votes;
    while(scanf("%d %d", &candi, &votes)) {
        if(candi == 0 && votes == 0) {
            break;
        }
        int arr_candi[candi];
        for(int i = 0; i < candi; i++) {
            arr_candi[i] = 0;
        }
        for(int i = 0; i < votes; i++) {
            int temp_vote;
            scanf("%d", &temp_vote);
            if(temp_vote > 0 && temp_vote <= candi) {
                arr_candi[temp_vote - 1]++;
            }
        }
        int maximum = arr_candi[0], winner_count = 0, who_winner;
        for(int i = 0; i < candi; i++) {
            if(maximum < arr_candi[i]) {
                maximum = arr_candi[i];
            }
        }
        for(int i = 0; i < candi; i++) {
            if(maximum == arr_candi[i]) {
                winner_count++;
                who_winner = i + 1;
            }
        }
        if(winner_count >= 2) {
            printf("No winner\n");
        }
        else {
            if(maximum > votes / 2) {
                printf("Majoritarian winner %d\n", who_winner);
            }
            else {
                printf("Plurality winner %d\n", who_winner);
            }
        }
    }
    return 0;
}
