#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y;
    puts("请输入第一个整数");
    scanf("%d", &x);
    puts("请输入第二个整数");
    scanf("%d", &y);

    if (x >= y) {
        if (x > y) {
            printf("较大的数是 % d\n", x);
            printf("较小的数是 % d\n", y);
        } else {
            puts("两数一样大");
        }
    } else {
        printf("较大的数是 % d\n", y);
        printf("较小的数是 % d\n", x);
    }

    return 0;
}