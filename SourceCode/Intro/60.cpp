bool solution(std::vector<std::vector<int>> grid) {
    for (int i = 0; i < 9; i++) {
        int a = 0, b = 0, c = 0;
        for (int j = 0; j < 9; j++) {
            a ^= 1 << grid[i][j];
            b ^= 1 << grid[j][i];
            c ^= 1 << grid[i - i % 3 + j / 3][i % 3 * 3 + j % 3];
        }
        if (a != 1022 || b != 1022 || c != 1022)
            return false;
    }
    return true;
}
