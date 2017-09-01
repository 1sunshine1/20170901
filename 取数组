int pickMaxSum(int **nums, int length) {
    for (int i = length - 2; i >= 0; --i) {
        for (int j = 0; j <= i; j++) {
            if (nums[i + 1][j] < nums[i + 1][j + 1]) {
                nums[i][j] += nums[i + 1][j + 1];
            } else {
                nums[i][j] += nums[i + 1][j];
            }
        }
    }
	return nums[0][0];
}
