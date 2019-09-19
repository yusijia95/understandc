#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y;
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);

    if (x - y >= 11 || x - y <= -11) {
        puts("他们的差大于等于11");
    } else {
        puts("他们的差小于等于10");
    }

    return 0;
}