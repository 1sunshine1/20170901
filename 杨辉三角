long long PascalTriangle(int row, int column) {
    long long **f = (long long**)malloc(2 * sizeof(long long*));
    f[0] = (long long *)calloc(row, sizeof(long long));
    f[1] = (long long *)calloc(row, sizeof(long long));
    f[1][0] = 1;
    f[0][0] = 1;
    for (int i = 2; i <= row; i++) {
        for (int j = 0; j < i; j++) {
            f[i % 2][j] = f[(i % 2) ^ 1][j];
            if (j > 0) {
            f[i % 2][j] += f[(i % 2) ^ 1][j - 1];
        }
    }
}
    long long ret = f[row % 2][column - 1];
    free(f[0]);
    free(f[1]);
    free(f);
    return ret;
}
