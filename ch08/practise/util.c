int combination(int n, int r) {
    int mul1 = 1;
    int mul2 = 1;
    int sum;

    for (int i = n; i > r; i--) {
        mul1 *= i;
        printf("%d\n", mul1);
    }

    for (int i = 0; i < r; i++) {
        mul2 *= (i + 1);
        printf("%d\n", mul2);
    }

    return sum = mul1 / mul2;
}

int gcd(int x, int y) {
    do {
        if (x > y) {
            if (((double) x) / ((double) y) > x / y) {
                int tep = x - y;
                x = y;
                y = tep;
            } else {
                return y;
            }
        } else if (y > x) {
            if (((double) x) / ((double) y) > x / y) {
                int tep = y - x;
                y = x;
                x = tep;
            } else {
                return x;
            }

        } else {
            return x;
        }
    } while (x > 1 && y > 1);
return 0;
}