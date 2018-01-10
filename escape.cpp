int escape(int **maze, int n, int m,
			    int initialHP, int maximumHP) {
    maze[1][1] += initialHP;
    if (maze[1][1] <= 0) return -1;
    int ans1, ans2;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = (i == 1 ? 2 : 1); j <= m; j++) {
            ans1 = ans2 = 0;
            if (i > 1 && maze[i - 1][j] > 0) {
                ans1 = maze[i - 1][j] + maze[i][j];
                if (ans1 < 0) ans1 = 0;
                if (ans1 > maximumHP) ans1 = maximumHP;
            } 
            if (j > 1 && maze[i][j - 1] > 0) {
                ans2 = maze[i][j - 1] + maze[i][j];
                if (ans2 < 0) ans2 = 0;
                if (ans2 > maximumHP) ans2 = maximumHP;
            } 
            maze[i][j] = ans1 > ans2 ? ans1 : ans2;
         }
    }
    return maze[n][m] == 0? -1 : maze[n][m];
}
