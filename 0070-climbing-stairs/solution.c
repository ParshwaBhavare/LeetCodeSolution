int climbStairs(int n) {
    int i, a = 0, b = 1, c;
    for (i = 1; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
