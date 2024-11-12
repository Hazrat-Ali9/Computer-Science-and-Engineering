int between(int *a, int *b)
{
    int sum = 0, *i;
    for (i = a; i < b; i++) {
        sum += *i;
    }
    return sum;
}