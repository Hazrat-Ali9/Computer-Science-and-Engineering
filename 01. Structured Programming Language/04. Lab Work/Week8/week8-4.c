#include <stdio.h>
#include <stdlib.h>

int main()
{
    int courses, scores, sid = 0, print_sid, stundent_id, course_id, sid2, score, count1 = 0, count2 = 0, count = 0;
    scanf("%d%d", &courses, &scores);
    int array[1000][10];
    int array2[1000][10];
    for(int i = 0; i < courses; i++) {
        scanf("%d%d%d", &sid, &stundent_id, &course_id);
        array[i][0] = sid;
        array[i][1] = stundent_id;
        array[i][2] = course_id;
        array[i][3] = 0;
        array[i][4] = 0;
        count1++;
        for (int j = 0; j < i - 1; j++) {
            if(stundent_id == array[j][1]) {
                count1 = count1 - 1;
                break;
            }
        }
    }
    int average_score;
    for(int i = 0; i < scores; i++) {
        scanf("%d%d", &sid2, &score);
        array2[i][0] = sid2;
        array2[i][1] = score;
        array[sid2][3] += score;
        array[sid2][4]++;
    }
    for(int i = 0; i < courses; ++i) {
        double avg = array[i][3] / (double) array[i][4];
        if (avg < 60.0) {
            count2++;
        }
    }
    printf("%d %d", count1, count2);
    return 0;
}