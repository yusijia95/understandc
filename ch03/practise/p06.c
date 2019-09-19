#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y, z,min;
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);
    printf("整数z:");
    scanf("%d", &z);
    min = x;

    if (y < min) {min = y;};

    if (z < min) {min = z;};

    printf("%d\n", min);

return 0;
}