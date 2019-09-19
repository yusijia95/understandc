#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x = 1;
    int y = 1;
    int a = 3;
    int b = 4;
    printf("相等运算符结果为真显示%d\n相等运算符结果为假显示%d\n", x == y, a == b);
    printf("关系运算符结果为真显示%d\n关系运算符结果为假显示%d\n", a > x, a < x);

    return 0;
}