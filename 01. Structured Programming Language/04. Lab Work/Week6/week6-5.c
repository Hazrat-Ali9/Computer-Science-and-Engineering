#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T, t = 0;
    scanf("%d", &T);
    while(t++ < T) {
        int points;
        scanf("%d", &points);
        float x[points], y[points];
        for(int i = 0; i < points; i++) {
            float temp_x, temp_y;
            scanf("%f %f", &temp_x, &temp_y);
            x[i] = temp_x;
            y[i] = temp_y;
        }
        for(int i = 0; i < points; i++) {
            for(int j = i + 1; j < points; j++) {
                if(x[i] < x[j]) {
                    float temp_x = x[i];
                    x[i] = x[j];
                    x[j] = temp_x;
                    float temp_y = y[i];
                    y[i] = y[j];
                    y[j] = temp_y;
                }
            }
        }

        // start to calculate the length of the sunny side
        int prev_point_y = 1;
        float sum = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
        for(int i = 2; i < points; i++) {
            if(y[i] > y[prev_point_y]) {
                float ae = sqrt((x[i] - x[i - 1]) * (x[i] - x[i - 1]) + (y[i] - y[i - 1]) * (y[i] - y[i - 1]));
                float ab = abs(y[i] - y[prev_point_y]);
                float ad = abs(y[i] - y[i - 1]);
                sum += ae * (ab / ad);
                prev_point_y = i;
            }
        }
        printf("%.2f\n", sum);
    }
    return 0;
}

/**

a -> (x[i], y[i])
b -> (x[i], y[prev_point_y])
d -> (x[i], y[i - 1])
e -> (x[i - 1], y[i - 1])

  a
  |\
  | \
  |  \
b |---\ c
  |    \
  |     \
d |------\ e

concept -> ab : ad = bc : de = ac : ce

formula -> sunny side ac = ae * (ab / ad)
                 or
formula -> sunny side ac = ae * (bc / de)

*/
