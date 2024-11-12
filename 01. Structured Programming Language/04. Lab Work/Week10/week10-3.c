int merger(int *a, int *b, int *c)
{
    for(int i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    for(int i = 0; i < 5; i++) {
        c[i + 5] = b[i];
    }
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    return 0;
}