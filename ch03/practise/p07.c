#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y, z, k, max;
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);
    printf("整数z:");
    scanf("%d", &z);
    printf("整数k:");
    scanf("%d", &k);
    max = x;

    if (y > max) {max = y;}

    if (z > max) {max = z;}

    if (k > max) {max = k;}

    printf("%d\n", max);

    return 0;
}