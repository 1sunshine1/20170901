long long numberOfPaths(int BX, int BY, int CX, int CY) {
	long long f[21][21];
    int map[21][21];
    f[0][0] = 1;
    int direct[9][2] = {{0, 0}, {2, 1}, {1, 2}, 
                        {-1, 2}, {-2, 1}, {-2, -1}, 
                        {-1, -2}, {1, -2}, {2, -1}};
    int x, y;
    for (int i = 0; i <= BX; i++) {
        for (int j = 0; j <= BY; j++) {
            map[i][j] = 1;
        }
    }
    
    
    for (int i = 0; i < 9; i++) {
        x = CX + direct[i][0];
        y = CY + direct[i][1];
        if (x < 0 || x > BX) continue;
        if (y < 0 || y > BY) continue;
        map[x][y] = 0;
    }
    
    for (int i = 0; i <= BX; i++) {
        for (int j = (i == 0 ? 1 : 0); j <= BY; j++) {
            f[i][j] = 0;
            if (!map[i][j]) continue;
            if (i > 0 && map[i - 1][j]) {
                f[i][j] += f[i - 1][j];
            }
            if (j > 0 && map[i][j - 1]) {
                f[i][j] += f[i][j - 1];
            }
        }
    }
    return f[BX][BY];
}
