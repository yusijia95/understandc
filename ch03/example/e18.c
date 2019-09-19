#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    puts("请输入第一个整数");
    scanf("%d", &x);

    if (x % 3) {
        if (x % 3 > 1) {
            puts("该数余数为2");
        } else {
            puts("该数余数为1");
        }
    } else {
        puts("该整数可以被三整除");

    }

    return 0;
}